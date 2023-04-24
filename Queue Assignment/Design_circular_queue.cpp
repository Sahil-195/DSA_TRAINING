class MyCircularQueue {
public:
    vector<int> ans;
    int f,r,k;
    MyCircularQueue(int k) {
        for(int i=0;i<k;i++) {
            ans.push_back(-1);
        }
        f = r = -1;
    }
    
    bool enQueue(int value) {
        int k = ans.size();
        if(isFull()) {
            return false;
        }
        r = (r+1)%k;
        ans[r] = value;
        
        if(f==-1) {
            f = 0;
        }
        return true;
    }
    
    bool deQueue() {
        int k = ans.size();
        if(isEmpty()) {
            return false;
        }
        if(f==r) {
            f = r = -1;
        }
        else
            f = (f+1)%k;
        return true;
    }
    
    int Front() {
        if(isEmpty()) {
            return -1;
        }
        return ans[f];
    }
    
    int Rear() {
        if(isEmpty()) {
            return -1;
        }
        return ans[r];
    }
    
    bool isEmpty() {
        if(f==-1 && r==-1) {
            return true;
        }
        return false;
    }
    
    bool isFull() {
        int k = ans.size();
        if((r+1)%k==f) {
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */