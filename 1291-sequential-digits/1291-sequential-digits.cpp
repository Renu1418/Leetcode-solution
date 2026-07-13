class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        string s = "123456789";

        int lower = to_string(low).size();
        int higher = to_string(high).size();

        for(int i =lower;i<=higher;i++){

            for(int start=0;start+i<=9;start++){
                            
               int num = stoi(s.substr(start,i));

               if(num>=low && num<=high){
                 ans.push_back(num);
               }
               if(num>high){
                break;
               }
            }
        }
        return ans;
    }
};