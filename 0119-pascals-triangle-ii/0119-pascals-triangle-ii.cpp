class Solution {
public:
    vector<int> getRow(int rowIndex) {
     vector<vector<int>>ans;
      
      ans.push_back({1});
      if(rowIndex==0) return ans[0];
      ans.push_back({1,1});
     if(rowIndex==1) return ans[1];
     for(int i=2;i<=rowIndex;i++){
       ans.push_back({});
        ans[i].push_back(1);
        for(int j=1;j<ans[i-1].size();j++){
            ans[i].push_back(ans[i-1][j-1] + ans[i-1][j]);
        }
        ans[i].push_back(1);
     }
      return ans[rowIndex];
    }
   
};