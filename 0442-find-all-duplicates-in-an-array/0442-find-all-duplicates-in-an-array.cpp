class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int idx;
        vector <int>ans;
        for(int i=0;i<nums.size();i++){
            idx= abs(nums[i])-1;
            if(nums[idx]<0){
                ans.push_back(abs(nums[i]));
            }
            
            nums[idx]=-nums[idx];
            
        }

        return ans;
    }
};