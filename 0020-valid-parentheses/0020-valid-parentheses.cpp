class Solution {
public:
    bool isValid(string s) {
        stack<int> st;

        for(char x : s)
        {
            if(x == '(' || x == '{' || x == '[')
            {
                st.push(x);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                if(st.top() == '(' && x == ')')
                {
                    st.pop();
                }
                else if(st.top() == '{' && x == '}')
                {
                    st.pop();
                }
                else if(st.top() == '[' && x == ']')
                {
                    st.pop();
                }
                else return false;
            }
        }

        if(st.empty()) return true;
        else return false;
    
    }
};