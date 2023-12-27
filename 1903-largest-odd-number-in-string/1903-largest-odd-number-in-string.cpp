class Solution {
public:
    string largestOddNumber(string num) {
        string oddans="";
        string curr="";
        for(int i=0;i<num.size();i++){
            int n=num[i]-'0';
            curr.push_back(num[i]);
            if(n%2!=0){
                oddans=curr;
            }
        }
        
        return oddans;
    }
};