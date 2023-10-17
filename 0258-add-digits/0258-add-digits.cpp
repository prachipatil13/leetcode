class Solution {
public:
    int addDigits(int num) {
        if(num<10){
            return num;
        }
        int newno=0;
    while(num>0){
        int ld=num%10;
        num=num/10;
        newno=newno+ld;
    }
        
          return  addDigits(newno);
            
        
           
       
    }
};