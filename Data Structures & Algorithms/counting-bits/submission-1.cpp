class Solution {
public:
    vector<int> countBits(int n) {
      vector<int>dp(n+1,0);
      int offset=1;
      for(int i=1;i<=n;i++){
         if(offset*2==i) {
            dp[i]=1;
            offset=i;
         }
         else dp[i]=1+dp[i-offset];
      }
      return dp;
    }
};
