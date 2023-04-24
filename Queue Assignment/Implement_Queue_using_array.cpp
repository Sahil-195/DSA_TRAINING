class MyQueue {
public:
    int ans[1000];
    int f,r;
    MyQueue() {
        f = -1;
        r = -1;
        
    }
    
    void push(int x) {
        if(r==1000-1) {
            return ;
        }
        r += 1;
        ans[r] = x;
        if(f==-1)
            f = 0;
    }
    
    int pop() {
        if(f==-1) {
            return -1;
        }
        int x = ans[f];
        f += 1;
        return x;
    }
    
    int peek() {
        return ans[f];
    }
    
    bool empty() {
        if(f==-1) {
            return true;
        }
        if(f>r) {
            f = r = -1;
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */