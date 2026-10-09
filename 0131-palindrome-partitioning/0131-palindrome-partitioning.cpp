class Solution {
public:

    bool isPali(string s)
    {
        string s1 = s;
        reverse(s1.begin(),s1.end());
        return s1 == s;
    }

    void getAllPart(string s, vector<string> &partion, vector<vector<string>> &ans)
    {
        if(s.size() == 0)
        {
            ans.push_back(partion);
            return;
        }

        for(int i = 0; i < s.size(); i++)
        {
            string part = s.substr(0,i+1);

            if(isPali(part))
            {
                partion.push_back(part);
                getAllPart(s.substr(i+1),partion,ans);
                partion.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        
        vector<string> partion;
        vector<vector<string>> ans;

        getAllPart(s,partion,ans);

        return ans;
    }
};