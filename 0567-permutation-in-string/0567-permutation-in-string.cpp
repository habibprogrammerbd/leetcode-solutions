class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int> mp1,mp2;
        for(char x : s1) mp1[x]++;
        
        int l = 0, r = 0;

        while(r < s2.size())
        {
            mp2[s2[r]]++;

            if(r - l +1 == s1.size())
            {
                if(mp1 == mp2) return true;

                if (mp2[s2[l]] == 1)
                {
                    mp2.erase(s2[l]);
                }
                else mp2[s2[l]]--;
                l++;
            }
            r++;
            
        }

        return false;
    }
};