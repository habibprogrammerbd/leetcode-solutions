
class MyQueue
{
public:
    stack<int> s;
    stack<int> s2;
    int val;
    MyQueue()
    {
    }

    void push(int x)
    {
    
        s.push(x);
        
    }
    
    int peek()
    {
        while (!s.empty())
        {
            s2.push(s.top());
            s.pop();
        }
        int value = s2.top();
        while (!s2.empty())
        {
            s.push(s2.top());
            s2.pop();
        }

        return value;
    }

    int pop()
    {
        while (!s.empty())
        {
            s2.push(s.top());
            s.pop();
        }
        int value = s2.top();
        s2.pop();

        while (!s2.empty())
        {
            s.push(s2.top());
            s2.pop();
        }
        return value;
    }

    bool empty()
    {
        return s.empty();
    }


};