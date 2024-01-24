class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int>mpp;
        
        for(int i=0;i<chars.size();i++){
            mpp[chars[i]]++;
        }
        
        int ans=0;
        for(string word:words){
            int len=0;
            map<char,int>copy=mpp;
            for(int i=0;i<word.size();i++){
                if(copy.find(word[i])!=mpp.end()&& copy[word[i]]!=0){
                    len++;
                    copy[word[i]]--;
                }else{
                    break;
                }
            }
            if(word.size()==len){
                ans +=len;
            }
        }
        
        return ans;
    }
};