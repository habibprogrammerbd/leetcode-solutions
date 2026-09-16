class Solution {
public:
    bool isPalindrome(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);



        string s1 = "";
        
        for(int i = 0; i < s.size(); i++)
        {
            if(int(s[i] >= 97 && 122 >= int(s[i])))
                s1 += s[i];
            else if (int(s[i] >= 65 && 90 >= int(s[i])))
            {
                s1 += char(int(s[i])+ 32);
            }
            else if(int(s[i] >= 48 && 57 >= int(s[i])))
            {
                s1 += s[i];
            }

        }

        string s2 = s1;
        reverse(s2.begin(),s2.end());


        if(s1 == s2) return true ;
        else return false;
            
    }
};