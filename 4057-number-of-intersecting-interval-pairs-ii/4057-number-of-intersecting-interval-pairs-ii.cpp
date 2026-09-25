class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        vector<int>v;

        for(int i=0;i<n;i++){
            v.push_back(intervals[i][1]);
        }
        sort(v.begin(),v.end());
         long long pairs=0;
        for(int i=1;i<n;i++){
            int c = intervals[i][0];
            int l=0;
            int r=i-1;
           while(l <= r) {
            int mid = l + (r-l)/2;

            if(v[mid] >= c) {
               r = mid - 1;
            }
            else {
              l = mid + 1;
            }
           }
           pairs += i - l;
        }
        return pairs;
    }
};