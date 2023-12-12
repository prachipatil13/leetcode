class Solution {
public:
    
    int fibonacci(int x){
        if(x<=1){
            return x;
        }
        
        return fibonacci(x-1)+fibonacci(x-2);
    }
    
    int fib(int n) {
        
  int ans=  fibonacci(n);
        return ans;
    }
};