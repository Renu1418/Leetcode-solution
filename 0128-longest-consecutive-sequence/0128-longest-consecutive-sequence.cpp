class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
    
    unordered_set<int> s;
    for(int num : nums) {
        s.insert(num);
    }
    
    int longest = 0;
    
    for(int num : s) {
        
        if(s.find(num - 1) == s.end()) {
            
            int currentNum = num;
            int count = 1;
    
            while(s.find(currentNum + 1) != s.end()) {
                currentNum++;
                count++;
            }
            
            longest = max(longest, count);
        }
    }
    
    return longest;
    }
};