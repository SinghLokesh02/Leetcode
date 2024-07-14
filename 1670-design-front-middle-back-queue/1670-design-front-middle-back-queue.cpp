class FrontMiddleBackQueue {
public:
    std::deque<int>q;
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) {
        q.push_front(val);
    }
    
    void pushMiddle(int val) {
        int mid = q.size()/2;
        q.insert(q.begin()+mid,val);
        
        
    }
    
    void pushBack(int val) {
        q.push_back(val); 
    }
    
    int popFront() {
        if(q.empty())return -1;
        int x = q.front();
        q.pop_front();
        return x;
    }
    
    int popMiddle() {
        if(!q.size())return -1;
        int mid = (q.size()-1)/2;
        int x = q[mid];
        q.erase(q.begin()+mid);
        return x;
        
    }
    
    int popBack() {
        if(q.empty())return -1;
        int x = q.back();
        q.pop_back();
        return x;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */