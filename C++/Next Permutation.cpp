// Problem Link: https://leetcode.com/problems/next-permutation/



class Solution {
public:
    void nextPermutation(vector<int> &num) 
    {
        if (num.empty()) return;
        
        
        int i;
        for (i = num.size()-2; i >= 0; --i)
        {
            if (num[i] < num[i+1]) break;
        }
        reverse(begin(num)+i+1, end(num));
        if (i == -1) return;
        auto itr = upper_bound(begin(num)+i+1, end(num), num[i]);
        swap(num[i], *itr);
    }
};