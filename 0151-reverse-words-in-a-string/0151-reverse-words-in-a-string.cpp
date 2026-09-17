class Solution {
public:
    string reverseWords(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        
        string ans;
        string s1 = "";
        bool x = true;
        for(int i = s.size() -1; i >= 0; i--)
        {
            if(s[i] != ' ')
            {
                s1 += s[i];
                x = false;
            }

            if((s[i] == ' ' || i == 0 ) && x == false)
            {
                reverse(s1.begin(),s1.end());
                ans += ' ' + s1;
                s1.clear();
                x = true;
            }

        }
        string final_ans = "";
        for(int  i = 1; i < ans.size(); i++)
        {
            final_ans += ans[i];
        }
    
        return final_ans;
    }
};