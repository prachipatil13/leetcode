class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        //apply moore'svoting algo
        int count=0;
        int ele;
        
        for(int i=0;i<n;i++){
            if(count==0){
                ele=nums[i];
                count++;
            }else if(ele==nums[i]){
                count++;
            }else{
                count--;
            }
        }
        
        //verify if ele is majority or not
        int count1=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ele){
                count1++;
            }
        }
        
        if(count1> (n/2)){
            return ele;
        }
        
        return -1;
    }
};