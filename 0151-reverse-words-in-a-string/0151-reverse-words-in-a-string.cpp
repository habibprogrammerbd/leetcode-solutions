class Solution {
public:
    string reverseWords(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        reverse(s.begin(),s.end());
        string ans = ""; bool x = false;

        for(int i = 0; i < s.size(); i++)
        {
            string word = "";

            while(i < s.size() && s[i] != ' ')
            {
                word += s[i];
                i++;
            }

            reverse(word.begin(),word.end());

            if(word.size() > 0 && x == false)
            {
                ans+= word;
                x = true;
            }
            else if(word.size() > 0) ans+= " " + word;
        }

    
        return ans;
    }
};