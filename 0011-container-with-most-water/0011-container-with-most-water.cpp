class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, r=height.size()-1;
        int d=0;
        int min_ele = 0;
        int ans=0; 
        while(l<r){
            d = r-l;
            min_ele = min(height[l],height[r]);
            ans = max(ans, min_ele*d);
            if(height[l]>height[r]){
                r--;
            }
            else{
                l++;
            }
        }

        return ans;

    }
};