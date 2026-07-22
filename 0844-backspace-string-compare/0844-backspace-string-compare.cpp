class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> st1;
        stack<int> st2;

        for( int x : s)
        {
            if(x == '#')
            {
                if(!st1.empty())
                   st1.pop();
            }
            else
            {
                st1.push(x);
            }    
        }
        for(int x : t)
        {
            if(x == '#')
            {
                if(!st2.empty())
                   st2.pop();
            }
            else
            {
                st2.push(x);
            }
        }

        if(st1 == st2 )
        {
            return true;
        }
        else
        {
            return false;
        }


    }
};