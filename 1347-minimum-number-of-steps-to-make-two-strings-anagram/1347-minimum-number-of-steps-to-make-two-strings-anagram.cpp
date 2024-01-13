class Solution {
public:
    int minSteps(string s, string t) {
      map<char,int>mpp;  
      int count=s.size();
        for(int i=0;i<s.size();i++){
           mpp[s[i]]++;
           
        }
        
        for(int i=0;i<s.size();i++){
           if(mpp[t[i]]!=0){
               mpp[t[i]]--;
               count--;
           }
           
        }
        
        return count;
    }
};