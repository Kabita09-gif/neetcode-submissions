class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int ans=0;
        int i=0;
        int j=n-1;
        while(i<j){
            int len=j-i;
            int mn=min(heights[i],heights[j]);
            int a=len*mn;
            if(heights[i]<heights[j]) i++;
            else j--;

            ans=max(ans,a);
        }
        return ans;
    }
};
