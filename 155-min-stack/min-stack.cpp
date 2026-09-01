class MinStack {
public:
    stack<long long int>s;
    long long int mn;
    MinStack() {
        
    }
    
    void push(int value) {
        if(s.empty()){
            s.push(value);
            mn=value;
        }else{
            if(value<mn){
                s.push((long long)2*value-mn);
                mn=value;
            }else{
                s.push(value);
            }
        }
    }
    
    void pop() {
        if(s.empty()) return;
        if(s.top()<mn){
            mn=2*mn-s.top();
        }
        s.pop();
    }
    
    int top() {
        if(s.empty()) return -1;
        if(s.top()<mn){
            return mn;
        }
        return s.top();
    }
    
    int getMin() {
        return mn;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */