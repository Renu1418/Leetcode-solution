class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans{{}};

        for(int i=0;i<nums.size();i++){
            int n = ans.size();
            int j=0;
            while(j<n){
                vector<int> v2 = ans[j];
                v2.push_back(nums[i]);           
                ans.push_back(v2);
                j++;
            }
        }
        return ans;
    }
};