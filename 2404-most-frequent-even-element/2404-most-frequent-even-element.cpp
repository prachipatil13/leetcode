class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map <int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        unordered_map <int,int> ::iterator it;
        it=mp.begin();
        
        int maxcount=0;
        int key=-1;
        while(it!= mp.end()){
            if((it->first)%2==0){
               if(it->second>maxcount){
                   maxcount=it->second;
                   key=it->first;
               }else if(it->second==maxcount){
                   if(key>it->first){
                         maxcount=it->second;
                   key=it->first;
                   }
               }
            }
            it++;
        }
       return key; 
    }
};