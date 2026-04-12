class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
         double Area;
        int n = points.size();
        double maxarea=0;
         
        for(int i=0;i<n;i++){
            int x1= points[i][0];
            int y1= points[i][1];
           
           for(int j=i+1;j<n;j++){
            int x2= points[j][0];
            int y2= points[j][1];
           
            for(int k=j+1;k<n;k++){
                
                int x3= points[k][0];
                int y3= points[k][1];

                Area = 0.5*fabs(x1*(y2-y3)+ x2*(y3-y1) + x3*(y1-y2));
                maxarea= max(maxarea,Area);
            }
            }
        }
       return maxarea;
    }
};