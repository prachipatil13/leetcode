class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int>v1(26,-1);
        vector<int>v2(26,-1);
        int maxlen=-1;
        for(int i=0;i<s.size();i++){
            int temp=s[i]-'a';
            
            if(v1[temp]==-1){
                v1[temp]=i;
                
            }else{
                v2[temp]=i;
                maxlen=max(maxlen, v2[temp]-v1[temp]-1);
            }
        }
        
        if (maxlen != -1) {
        return maxlen;
    } else {
        return -1;
    }
    
  
    }
};