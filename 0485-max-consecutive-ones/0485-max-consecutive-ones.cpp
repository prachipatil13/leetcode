class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max1=0;
        int count=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }else{
                max1=max(max1,count);
                count=0;
            }
        }
        
        max1=max(max1,count);
        
        return max1;
    }
};