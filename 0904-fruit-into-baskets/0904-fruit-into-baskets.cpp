class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        unordered_map<int,int>mp;
        int type=0;
        int ans=0;
        int l=0;
        for(int r=0;r<fruits.size();r++){
            mp[fruits[r]]++;
            if(mp[fruits[r]]==1){
                type++;
            }

            while(type>2){
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0){
                    type--;
                }
                l++;
            }
            ans = max(ans,r-l+1);
        }
        return ans;
    }
};