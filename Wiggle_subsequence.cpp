class Solution {
public:
    int dp[1001][1002][2];
    int solve(vector<int>& nums,int n,int lastnum,int inc){
        if(n<=0) return 0;
        if(dp[n][lastnum][inc]!=-1) return dp[n][lastnum][inc];
        if(inc){
            if(nums[n-1]<lastnum){
                int a = solve(nums,n-1,nums[n-1],0) + 1;
                int b = solve(nums,n-1,lastnum,inc);
                return dp[n][lastnum][inc] = max(a,b);
            }else{
                return dp[n][lastnum][inc] = solve(nums,n-1,lastnum,inc);
            }
        }else{
            if(nums[n-1]>lastnum){
                int a = solve(nums,n-1,nums[n-1],1) + 1;
                int b = solve(nums,n-1,lastnum,inc);
                return dp[n][lastnum][inc] = max(a,b);
            }else{
                return dp[n][lastnum][inc] = solve(nums,n-1,lastnum,inc);
            }
        }
    }
    
    int wiggleMaxLength(vector<int>& nums) {
       int n = nums.size();
        memset(dp,-1,sizeof(dp));
        int a = solve(nums,n,0,0);
        int b = solve(nums,n,1001,1);
        return max(a,b);
    }
};
