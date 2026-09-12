class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int>ans(n1);

        for(int i =0;i<n1;i++){
            int nogrt=0;
            int found=0;
            for(int j=0;j<n2;j++){
                if(found==1){
                    if(nums2[j]>nums1[i]){
                        found=0;
                        nogrt=1;
                        ans[i]=nums2[j];
                        break;
                    }
                }
                if(nums2[j]==nums1[i]){
                  found=1;
                }
            }
            if(nogrt==0){
                ans[i]=-1;
            }

        }
        return ans;
    }
};