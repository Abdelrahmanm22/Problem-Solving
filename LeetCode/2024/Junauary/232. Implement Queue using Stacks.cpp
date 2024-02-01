class MyQueue {
public:
        queue<int>q;
    MyQueue() {}

    void push(int x) {
        q.push(x);
    }

    int pop() {
        int num = q.front();
        q.pop();
        return num;
    }

    int peek() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};