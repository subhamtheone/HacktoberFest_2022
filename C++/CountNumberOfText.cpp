class Solution {
public:
    int mod=1e9+7;
    int func(string &s,int i,int n,vector<int> &dp){
        if(i>=n)return 1;
        if(dp[i]!=-1)return dp[i];
        int ans=0;
        if(i+1<n && s[i]==s[i+1]){
            ans+=func(s,i+2,n,dp);
            ans=ans%mod;
            if(i+2<n && s[i]==s[i+2]){
                ans+=func(s,i+3,n,dp);
                ans=ans%mod;
                if(i+3<n && s[i]==s[i+3] && (s[i]=='9' || s[i]=='7'))ans+=func(s,i+4,n,dp);
                ans=ans%mod;
            }
        }
        ans+=func(s,i+1,n,dp);
        ans=ans%mod;
        return dp[i]=ans;
    }
    int countTexts(string s) {
        int n=s.length();
        vector<int> dp(n+1,-1);
        return func(s,0,n,dp);
    }
};
