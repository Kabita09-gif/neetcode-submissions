class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int ans=(n-1)*min(heights[0],heights[n-1]);
        int i=1;
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
