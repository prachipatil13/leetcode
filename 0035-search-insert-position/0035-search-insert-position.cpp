class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int idx=nums.size();
        
        int low=0;
        int high=nums.size()-1;
        
        
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                idx=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
                
        }
        return idx;
    }
};