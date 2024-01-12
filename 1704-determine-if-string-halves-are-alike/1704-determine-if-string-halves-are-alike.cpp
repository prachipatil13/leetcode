class Solution {
public:
    bool halvesAreAlike(string s) {
        int i=0;
        int j=s.size()-1;
       int count1=0;
         int count2=0;
        while(i<j){
            char ch;
            if(s[i]<97){
            ch=s[i]-'A'+'a';
            }else{
                 ch=s[i];
            }
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
               count1++;
            }
            
            char ch1;
           
             if(s[j]<97){
             ch1=s[j]-'A'+'a';
             }else{
                  ch1=s[j];
             }
            if(ch1=='a'||ch1=='e'||ch1=='i'||ch1=='o'||ch1=='u'){
               count2++;
            }
            i++;
            j--;
        }
        
        
        if(count1!=count2)return false;
        
        return true;
    }
};