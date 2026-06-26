class Solution {
public:
    bool isHappy(int n) {
      int ans=0;
      int temp=0;
      unordered_set<int>seen;
      seen.insert(n);
      while(n>1){
        temp=n;
        ans=0;
         while(temp>0){
          int rem=temp%10;
          ans+=(rem)*(rem);
          temp/=10;
        } 
        if(seen.count(ans))  return false; 
        seen.insert(ans);
        n=ans;
      }

      if(n==1)  return true;
      return false;
        
      }
};
