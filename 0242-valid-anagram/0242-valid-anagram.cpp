class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[128]={0};
        if(s.size()!=t.size())
            return false;
        
        for(int i=0;i<s.size();i++){
           count[s[i]]++;
            count[t[i]]--;
        }
        
        
        
        
        for(int i=0;i<128;i++){
            if(count[i]!=0){
                return false;
            }
        }
        
        return true;
    }
};