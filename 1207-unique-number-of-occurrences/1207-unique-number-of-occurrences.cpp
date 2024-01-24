class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        
        unordered_set<int>s;
        for(auto x:mpp){
            s.insert(x.second);
        }
        
        
        return mpp.size()==s.size();
    }
};