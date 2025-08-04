class MyQueue {
private:
    stack<int> s;

    int popBottom() {
        int topVal = s.top();
        s.pop();
        if (s.empty()) {
            return topVal;
        } else {
            int bottom = popBottom();
            s.push(topVal);
            return bottom;
        }
    }

    int peekBottom() {
        int topVal = s.top();
        s.pop();
        if (s.empty()) {
            s.push(topVal);
            return topVal;
        } else {
            int bottom = peekBottom();
            s.push(topVal);
            return bottom;
        }
    }

public:
    MyQueue() {}

    void push(int x) {
        s.push(x);
    }

    int pop() {
        return popBottom();
    }

    int peek() {
        return peekBottom();
    }

    bool empty() {
        return s.empty();
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