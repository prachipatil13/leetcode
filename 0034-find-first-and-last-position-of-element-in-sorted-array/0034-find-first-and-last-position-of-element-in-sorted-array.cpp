class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(nums.size()==0){
            return{-1,-1};
        }
        //vector<int>::iterator lower,upper;
        int  lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int ub=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
                           
                           
                           
                          vector<int>ans;
                           
                           if(lb==n  || nums[lb]!=target){
                               return{-1,-1};
                           }else{
                               ans.push_back(lb);
                           }
                           
                            
                          
                               ans.push_back(ub-1);
                           
                           return ans;
        
    }
};