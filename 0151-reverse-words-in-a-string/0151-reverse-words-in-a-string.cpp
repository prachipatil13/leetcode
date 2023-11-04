class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        string ans="";
        
            
            
            int i=0;
            int n=s.size();
        
        while(i<n){
            while(s[i]==' '&&i<n){
                i++;
            }
            
            
            while(s[i]!=' '&&i<n){
                temp +=s[i];
                i++;
            }
            
            if(temp.size()>0){
                if(ans.size()==0){
                    ans =temp;
                }else{
                    ans= temp + ' '+ans;
                }
                temp="";
            }
        }
        return ans;
    }
};