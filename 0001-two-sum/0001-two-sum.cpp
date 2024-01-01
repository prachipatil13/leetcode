class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int k=target-nums[i];
            if(mpp.find(k)!=mpp.end()){
                ans.push_back(mpp[k]);
                ans.push_back(i);
                break;
            }
            mpp[nums[i]]=i;
        }
        
        return ans;
    }
};