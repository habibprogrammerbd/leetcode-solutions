class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        if(num.size() == k) return "0";
            
        for(auto x : num)
        {
            while(!st.empty() && st.top() > x && k > 0)
            {
                st.pop();
                k--;
            }
            st.push(x);
        }

        while(k > 0) 
        {
            st.pop();k--;
        }

        string s = "";

        while(!st.empty())
        {
            s+=st.top();
            st.pop();
        }

        reverse(s.begin(),s.end());
        
       
        size_t found = s.find_first_not_of('0');

        if (found != string::npos) 
        {
            return s.substr(found);
        } 
        

        return "0";
    }
};