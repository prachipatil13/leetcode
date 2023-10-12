class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size()-1;
        int l=0;
        int h=n;
       int first=-1;
        int last=-1;
        
        //finding first occurence
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
              first=mid;  
                h=mid-1;
            }else if(nums[mid]>target){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        
        //finding last occurence
         l=0;
         h=n;
         while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
              last=mid;  
                l=mid+1;
            }else if(nums[mid]>target){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        
        vector<int>ans;
        ans.push_back(first);
         ans.push_back(last);
        return ans;
        
    }
};