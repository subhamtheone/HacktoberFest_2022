//Problem: https://leetcode.com/problems/maximal-rectangle/

//Solution
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    vector<int> nxtSmaller(vector<int> n){
        int sz = n.size();
        vector<int> res(sz,-1);
        stack<int> s;
        for(int i=sz-1;i>=0;i--){
            if(s.empty())
                s.push(i);
            else{
                while(!s.empty() && n[s.top()]>=n[i])
                    s.pop();
                res[i] = !s.empty() ? s.top() : -1;
                s.push(i);
            }
        }
        return res;
    }
    vector<int> prevSmaller(vector<int> n){
        int sz = n.size();
        vector<int> res(sz,-1);
        stack<int> s;
        for(int i=0;i<sz;i++){
            if(s.empty())
                s.push(i);
            else{
                while(!s.empty() && n[s.top()]>=n[i])
                    s.pop();
                res[i] = !s.empty() ? s.top() : -1;
                s.push(i);
            }
        }
        return res;
    }
    int largestArea(vector<int> num){
        int area,maxArea = INT_MIN;
        int n = num.size();
        vector<int> nxt = nxtSmaller(num);
        vector<int> prev = prevSmaller(num);
        for(int i=0;i<n;i++){
            int h = num[i];
            if(nxt[i]==-1){
                nxt[i] = n;
            }
            int b = nxt[i]-prev[i]-1;
            area = h * b;
            maxArea = max(maxArea,area);
        }
        return maxArea;
    }
    int maximalRectangle(vector<vector<char>>& m) {
        vector<vector<int>> matrix(m.size(),vector<int>(m[0].size(),0));
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]=='1'){
                    matrix[i][j] = 1;
                }
            }
        }
        int area;
        int maxArea = largestArea(matrix[0]);
        for(int i=1;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]!= 0){
                    matrix[i][j] += matrix[i-1][j];
                }
                else{
                    matrix[i][j] = 0;
                }
            }
            area = largestArea(matrix[i]);
            maxArea = max(area,maxArea);
        }
        return maxArea;
    }
};