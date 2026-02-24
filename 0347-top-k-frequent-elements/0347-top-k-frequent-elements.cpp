class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(int num:nums){
            mpp[num]++;
        }

        priority_queue<pair<int,int>>pq;

        for(auto mp:mpp){
            pq.push({mp.second,mp.first});
        }
        while(k>0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
};