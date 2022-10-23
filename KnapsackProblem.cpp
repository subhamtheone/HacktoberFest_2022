#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+1;
int wt[N];
int val[N];
int ans;
int n,wt1;

int knapsack(int n , int wt1 , int t[][1001])
{
    if(n==0 || wt1==0) return 0;

    
    if(t[n][wt1]!=-1) return t[n][wt1];
    if(wt[n-1]<=wt1)
    {
        t[n][wt1] = max(val[n-1]+knapsack(n-1,wt1-wt[n-1],t),knapsack(n-1,wt1,t));
    }
    else{
        t[n][wt1] = knapsack(n-1,wt1,t);
    }
    return t[n][wt1];
}
int main()
{
    // int n;
    cin>>n;
    for(int i=0 ; i<n ; i++) cin>>wt[i];
    for(int i=0 ; i<n ; i++) cin>>val[i];
    // int wt1;
    cin>>wt1;
    // init(n,wt1);
    int t[1001][1001];
    memset(t,-1,sizeof(t));
    cout<<knapsack(n,wt1,t)<<endl;
    cout<<t[n][wt1];
    return 0;

}