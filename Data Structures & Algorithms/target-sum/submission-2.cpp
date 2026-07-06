class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int range=0;
        for(int i=0;i<n;i++){
            range+=nums[i];
        }

        if(abs(target)>range) return 0;
        if((target+range)%2!=0)  return 0;

        int s1=(target+range)/2;
        vector<vector<int>>dp(n+1,vector<int>(s1+1,0));
        dp[0][0]=1;

        for(int i=1;i<=n;i++){
            for(int j=0;j<=s1;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-nums[i-1]];
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][s1];
        
    }
};
