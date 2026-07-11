class Solution {
public:
    set<vector<int>>s;

    void solve(vector<int>nums, vector<int>ans){
      if(nums.size()==0){
        s.insert(ans);
        return;
      }

      vector<int>ans1=ans; //include
      vector<int>ans2=ans;  //exclude 

      ans1.push_back(nums[0]); //including the element
      nums.erase(nums.begin()); //smaller input 

      solve(nums,ans1);
      solve(nums,ans2);

      return;

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        solve(nums,ans);
        vector<vector<int>>output(s.begin(),s.end());
        return output;
    }
};
