class Solution {
public:
    int solve(vector<int>& nums,int st,int end){
        int len=end-st+1;
        if(len==1)  return nums[st];
        if(nums.size()==1)  return nums[0];
        vector<int>dp(len+1,0);
        dp[1]=nums[st];
        dp[2]=max(nums[st],nums[st+1]);

        for(int i=3;i<=len;i++){
             dp[i]=max(dp[i-1],nums[st+i-1]+dp[i-2]);
        }
        return dp[len];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        int ans1=solve(nums,0,n-2);
        int ans2=solve(nums,1,n-1);

        return max(ans1,ans2);
    }
};
