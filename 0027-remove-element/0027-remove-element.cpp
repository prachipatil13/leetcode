class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int idx=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=val){
                swap(nums[idx],nums[j]);
                    idx++;
                
            }
        }
        
        return idx;
    }
};