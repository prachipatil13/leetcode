class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length()!=t.length()){
            return false;
        }
        
        vector<int>freq(128,-1);
        
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
            freq[t[i]]--;
        }
        
        
        for(int i=0;i<freq.size();i++){
           if(freq[i]!=-1){
               return false;
           }
        }
        
        return true;
        
    }
};