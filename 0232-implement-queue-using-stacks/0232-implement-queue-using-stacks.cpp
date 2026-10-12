class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;

    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        int x = -1;
        while(!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }

        if(!st2.empty())
        {
            x = st2.top();
            st2.pop();
        }

        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        return x;
    }
    
    int peek() {
        
        int x = -1;
        while(!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }

        if(!st2.empty())
        {
            x = st2.top();
        }

        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        return x;
    }
    
    bool empty() {
        return st1.empty();
    }
};
