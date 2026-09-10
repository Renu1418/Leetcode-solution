class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        int ans =0;
        for(int i=0;i<n;i++){
            string str = s.substr(i)+s.substr(0,i);
            int score = 0;
            for(int j=0;j<n-1;j++){
                if(str[j]==str[j+1]){
                    score++;
                }
            }
            if(score==k){
               ans++;
            }
        }
        return ans;
    }
};