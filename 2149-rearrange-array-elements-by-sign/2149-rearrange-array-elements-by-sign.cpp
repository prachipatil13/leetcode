class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
       vector<int>arr(n);
        int pI=0;
        int nI=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                arr[nI]=nums[i];
                nI=nI+2;
            }else{
               arr[pI]=nums[i];
                pI=pI+2;  
            }
        }
        
        return arr;
    }
};