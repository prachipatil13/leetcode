class Solution {
public:
    int maxScore(string s) {
        int arr0[s.size()];
         int arr1[s.size()];
        int count0=0;
        int count1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                count0++;
                
            }
            arr0[i]=count0;
        }
        
        
        for(int i=s.size()-1;i>=0;i--){
            
        
            if(s[i]=='1'){
                count1++;
                
            }
            arr1[i]=count1;
        }
               int maxi=0;
               for(int i=0;i<s.size()-1;i++){
                 int j=i+1;
                   int sum=arr0[i]+arr1[j];
                   maxi=max(maxi,sum);
               }
                                        
             return maxi;
    }
};