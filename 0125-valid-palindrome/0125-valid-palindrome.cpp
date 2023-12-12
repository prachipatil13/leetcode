class Solution {
public:
    
    bool palindrome(int s,int e,string &st){
        if(s>=e){
            return true;
        }
        
        if(st[s]!=st[e]){
            return false;
        }
        
        return palindrome(s+1,e-1,st);
    }
    
     char lowercase(char ch){
        if((ch>='a'&& ch<='z')||(ch>='0'&& ch<='9')){
            return ch;
        }else{
            char temp= ch-'A' +'a';
            return temp;
        }
    }
    
    bool isPalindrome(string s) {
        string temp="";
        
        for(int i=0;i<s.size();i++){
            char ch=s[i];
           if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')||(ch>='0'&& ch<='9')){
             char t=lowercase(ch);
               temp +=t;
         }
            
            
    }
        return palindrome(0,temp.length()-1,temp);
    }
};