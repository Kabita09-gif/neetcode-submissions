class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<pair<int, int>> indexedNums;
      for (int i = 0; i < nums.size(); ++i) {
          indexedNums.push_back({nums[i], i});
      }
      sort(indexedNums.begin(), indexedNums.end());
      int i=0,j=indexedNums.size()-1;
      int first=-1,last=-1;
      while(i < j){
          if(indexedNums[i].first + indexedNums[j].first > target){
            j--;
          }else if(indexedNums[i].first + indexedNums[j].first < target){
            i++;
          }else{
            first=indexedNums[i].second;
            last=indexedNums[j].second;
            break;
          }
      }  
      if (first > last) swap(first, last);
      return {first,last};
    }
};