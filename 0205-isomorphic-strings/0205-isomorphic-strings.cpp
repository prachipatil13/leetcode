class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>s1(256,-1);
        vector<int>s2(256,-1);
        
        if(s.size()!=t.size()){
            return false; 
        }
        
        for(int i=0;i<s.size();i++){
            if(s1[s[i]]==s2[t[i]]){
                s1[s[i]]=s2[t[i]]=i;
            }else{
                return false;
            }
        }
        
        return true;
    }
};