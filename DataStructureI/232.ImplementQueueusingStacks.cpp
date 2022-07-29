// 	0 ms, 7.2 MB
class MyQueue {
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        psh.push(x);
    }
    
    int pop() {
        while(!psh.empty()){
            pp.push(psh.top());
            psh.pop();
        }
        int x = pp.top();
        pp.pop();
        
        while(!pp.empty()){
            psh.push(pp.top());
            pp.pop();
        }
        return x;
    }
    
    int peek() {
        while(!psh.empty()){
            pp.push(psh.top());
            psh.pop();
        }
        int x = pp.top();
        
        while(!pp.empty()){
            psh.push(pp.top());
            pp.pop();
        }
        return x;
    }
    
    bool empty() {
        return psh.empty();
    }
    
    private:
        stack<int> psh;
        stack<int> pp;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
