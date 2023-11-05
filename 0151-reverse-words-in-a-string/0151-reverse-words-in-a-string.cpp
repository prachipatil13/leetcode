class Solution {
public:
    string reverseWords(string s) {
        string current="";
        string ans="";
        int n=s.size();
        //removing leading spaces
        int i=0;
      while(i<n){
          while(s[i]== ' '&&i<n){
               
              i++;
           }
          
          while(s[i]!=' '&&i<n){
              current +=s[i];
              i++;
          }
          if(current!=""){
          if(ans==""){
              ans=current;
          }else{
              ans=current +" "+ans;
          }
          current="";
          }
      }
        
        return ans;
    }
};