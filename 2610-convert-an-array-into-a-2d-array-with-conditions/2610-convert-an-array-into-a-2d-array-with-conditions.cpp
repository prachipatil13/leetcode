class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map <int,int>mp;
        int maxi=0;
        
        for(int it:nums){
            mp[it]++;
            maxi=max(maxi,mp[it]);
        }
        
        
        vector<vector<int>>ans(maxi);
        
        for(auto it1:mp){
            int count=it1.second;
            for(int i=0;i<count;i++){
                ans[i].push_back(it1.first);
            }
        }
        
        return ans;
    }
};