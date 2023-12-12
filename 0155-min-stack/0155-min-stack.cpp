class MinStack {
    stack <long long> s;
    long long mini;
public:
    MinStack() {
       
        mini=INT_MAX;
    }
    
    void push(int val) {
        long long value=long(val);
        if(s.empty()){
            
            s.push(value);
            mini=value;
        }else if(value<mini){
            
            s.push(2*value-mini);
            mini=value;
        }else{
            s.push(value);
        }
    }
    
    void pop() {
        if(s.empty()){
            
            return;
        }else if(s.top() <mini){
           
            mini=2*mini-s.top();
           
        }
         s.pop();
    }
    
    int top() {
         if(s.empty()){
            return -1;
        }
        if(s.top() <mini){
            
           return mini;
        }else{
             return s.top();
         }
    }
    
    int getMin() {
       
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */