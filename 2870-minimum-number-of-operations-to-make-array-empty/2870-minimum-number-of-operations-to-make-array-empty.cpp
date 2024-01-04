class Solution {
    
public:
    int findsteps(int count){
        int steps=0;
         if(count%3==0){
                   steps=steps+ (count/3);
                  
                 }else{
            
                     if((count%3)%2==0){
                       steps=steps +count/3;
                       count=count%3;
                       steps=steps +count/2;
                      }else{
                       
                       steps=steps+ (count/3)-1;
                       int fact=(count/3)-1;
                       int count1=count-(fact*3);
                       steps=steps + (count1/2);
                      }
         }
             return steps;
    }
    int minOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int steps=0;
        int count=1;
        int prev=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==prev){
                count++;
            }else{
                 if(count==1 ){
                 return -1;
             }
                steps+=findsteps(count);
                 count=1;
                prev=nums[i];

            }
          
        }
         if(count==1 ){
                 return -1;
             }
         steps+=findsteps(count);
        
        
         return steps; 
       }
};

