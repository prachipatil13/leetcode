class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int sum=0;
        for(auto itr=mpp.begin();itr!=mpp.end();itr++){
            if(itr->second <2){
                sum += itr->first;
            }
        }
        
        return sum;
    }
};