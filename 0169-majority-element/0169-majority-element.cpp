class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
                return nums[0];
            }
        int m=n/2;
        sort(nums.begin(),nums.end());
        int maxi=0;
        int count=1;
        for(int i=1;i<n;i++){
            
            if(nums[i]==nums[i-1]){
                count++;
                if(count>m){
                    return nums[i];
                }
            }else{
                count=1;
            }
        }
        return 0;
    }
};