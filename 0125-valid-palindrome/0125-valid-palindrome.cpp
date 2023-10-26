class Solution {
private:
     bool valid(char ch){
         if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')||(ch>='0'&& ch<='9')){
             return true;
         }else{
             return false;
         }
     }  
    
    char lowercase(char ch){
        if((ch>='a'&& ch<='z')||(ch>='0'&& ch<='9')){
            return ch;
        }else{
            char temp= ch-'A' +'a';
            return temp;
        }
    }
public:
    bool isPalindrome(string s) {
        //removing non alphanumeric characters
        string temp="";
        
        for(int i=0;i<s.size();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
        
        //converting to lowercase
        for(int i=0;i<temp.size();i++){
            temp[i]=lowercase(temp[i]);
        }
        
        
        int i=0;
        int j=temp.size()-1;
        
        
        while(i<=j){
            if(temp[i]!=temp[j]){
                return false;
            }else{
                i++;
                j--;
            }
        }
        
        return true;
        
    }
};