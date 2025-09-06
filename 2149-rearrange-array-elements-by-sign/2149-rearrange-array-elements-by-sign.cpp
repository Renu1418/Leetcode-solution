class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int i=0;//pos
        int j=1;//neg

        for(int num:nums){
            if(num>0){
                ans[i]=num;
                i+=2;
            }
            else{
                ans[j]=num;
                j+=2;
            }
        }
        return ans;

    }
};