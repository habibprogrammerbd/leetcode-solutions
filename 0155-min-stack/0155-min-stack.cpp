class MinStack {
public:

    stack<int> st,min_st;

    MinStack() {
        
    }
    
    void push(int value) 
    {
        st.push(value);

        if(min_st.empty())
        {
            min_st.push(value);
        }
        else if(min_st.top() >= value)
        {
            min_st.push(value);
        }
    }
    
    void pop() {
        if(st.empty())
        {
            return;
        }
        else if(st.top() == min_st.top())
        {
            min_st.pop();
        }

        st.pop();
    }
    
    int top() {
        if(st.empty())
        {
            return -1;
        }
        else
        {
            return st.top();
        }
    }
    
    int getMin() {
        if(min_st.empty()) return -1;
        return min_st.top();
    }
};