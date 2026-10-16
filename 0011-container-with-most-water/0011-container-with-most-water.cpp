class Solution {
public:
    int maxArea(vector<int>& height) {
      
      int l=0;
      int r = height.size()-1;
      int mxArea =0;
      while(l<r){
        int area = min(height[l],height[r])*(r-l);
        mxArea = max(mxArea,area);
        if(height[l]>height[r]){
            r--;
        }
        else{
            l++;
        }
      }
      return mxArea;
    }
};