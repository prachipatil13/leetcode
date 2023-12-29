class Solution {
public:
  long long getVal(char ch){
        switch(ch){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;   
            case 'C': return 100;
           
            case 'D': return 500;    
            case 'M': return 1000;    
           default:return 0;    
        }
    }
    int romanToInt(string s) {
        int n=s.size()-1;
long long res=getVal(s[n]);
        
        for(int i=n-1;i>=0;i--){
           long long r= getVal(s[i+1]);
           long long l=getVal(s[i]);
            
            if(l<r){
               res= res- l;
            }else{
               res= res+l;
            }
        }
        
        return res;
    }
};