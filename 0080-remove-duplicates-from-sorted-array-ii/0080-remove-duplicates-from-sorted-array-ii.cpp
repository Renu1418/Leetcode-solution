class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int count=1;
        int index=1;

        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
                if(count<=2){
                    nums[index]=nums[i];
                    index++;
                }
            }
            else{
                count=1;
                nums[index]=nums[i];
                index++;
            }
        }
        return index;
    }
};