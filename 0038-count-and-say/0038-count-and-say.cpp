class Solution {
public:
    string countAndSay(int n) {
    
        if(n==1){
            return "1";
        }
        if(n==2){
            return "11";
        }
        string ans = "11";
        while(n-2>0){
            string result = "";
            int count=1;
            for(int i=1;i<ans.size();i++){
                if(ans[i]==ans[i-1]){
                    count++;
                }
                else{
                   result += (count + '0');
                   result += ans[i-1];
                    count=1;
                }
            }
                result += (count + '0');
                result += ans.back();
                ans = result;
                n--;
        }
        return ans; 
    }
};