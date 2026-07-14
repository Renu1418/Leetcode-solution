class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(); //row
        int n = matrix[0].size(); //col
        vector<int>ans;
        //row-no
        int top=0;
        int bottom = m-1;
        //col -no
        int left=0;
        int right = n-1;

        while(top<=bottom && left<=right){

            //top row (left-right)
            for(int i=left;i<=right;i++){
              ans.push_back(matrix[top][i]);
            }
           top++;
            
            // right col -(top-bottom)
            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;

            // bottom row -(right-left)
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
             bottom--;
           }
           
             // left col -(bottom-top)
             if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
            }
            
    }
        return ans;

    }
};