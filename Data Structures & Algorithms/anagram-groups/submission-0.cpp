class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>res;
        for(int i=0;i<strs.size();i++){
            vector<int>freq(26,0);
            for(char c:strs[i]){
                freq[c-'a']++;
            }
            string key="";
            for(int i=0;i<26;i++){
                key+=to_string(freq[i])+",";
            }
            res[key].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto& x:res){
            ans.push_back(x.second);
        }
        return ans;
    }
};
