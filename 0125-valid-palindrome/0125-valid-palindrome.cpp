class Solution {
public:
    bool idAlphaNum(char x)
    {
        if((x >= '0' && x <='9') || (tolower(x) >= 'a' && tolower(x) <= 'z'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isPalindrome(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int st = 0, end = s.size() -1;

        while(st <= end)
        {
            if(!idAlphaNum(s[st]))
            {
                st++;
                continue;
            }
            if(!idAlphaNum(s[end]))
            {
                end--;
                continue;
            }

            if(tolower(s[st]) != tolower(s[end]))
            {
                return false;
            }
            st++, end--;
        }

        return true;
    }
};