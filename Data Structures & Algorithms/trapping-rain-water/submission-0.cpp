class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int ans=0;
        for(int i=1;i<n-1;i++){
            int lmax=height[i];
            for(int j=i-1;j>=0;j--){
                if(lmax<height[j]) lmax=height[j];
            }

            int rmax=height[i];
            for(int j=i+1;j<n;j++){
                if(rmax<height[j]) rmax=height[j];
            }

            ans+=min(lmax,rmax)-height[i];
        }
        return ans;
    }
};
