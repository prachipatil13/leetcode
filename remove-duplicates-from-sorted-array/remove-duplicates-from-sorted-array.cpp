class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j;
        for(j=1;j<n;j++){
            if(nums[i]!=nums[j]){
                i++;
               swap(nums[i],nums[j]);
              
            }
                
            
        }

        return i+1;
    }
};