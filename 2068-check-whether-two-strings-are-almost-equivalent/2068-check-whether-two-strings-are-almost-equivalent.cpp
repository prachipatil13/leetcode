class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int>mpp;
        int i=0;
        int j=0;
        while(i<word1.size()||j<word2.size()){
            if(i<word1.size()){
                mpp[word1[i]]++;
                i++;
            }
            if(j<word2.size()){
                
                mpp[word2[j]]--;
                j++;
            }
        }
        
        
        for(auto itr:mpp){
            if(abs(itr.second)>3){
                return false;
            }
        }
        
        return true;
    }
};