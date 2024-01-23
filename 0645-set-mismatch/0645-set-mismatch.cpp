class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       long long x=0;//repeting  - sum of array
        long long y=0; //missing - sn
       long long x2=0;
        long long y2=0;
        
        for(int i=0;i<nums.size();i++){
           x +=nums[i];
           y += (i+1);
            x2 += nums[i]*nums[i];
            y2+=  (i+1)*(i+1);
        }
        
       
       long long x_y=x-y;
       long long xplusy=(x2-y2)/x_y;
       long long val1= (x_y +xplusy)/2;
       long long val2=val1 -(x-y);
        
        
        vector<int>ans;
        ans.push_back(val1);
        ans.push_back(val2);
        
        return ans;
       
        
        
        
        
        
    }
};