class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        vector<string> s = str;

        vector<vector<string>> ans;
        map<string,vector<string>> sameStr;

        for(int i = 0; i < s.size(); i++)
        {
            sort(s[i].begin(),s[i].end());
        }


        for(int i = 0; i < s.size(); i++)
        {
            sameStr[s[i]].push_back(str[i]);
        }

        for(auto [x,y] : sameStr) {
            ans.push_back(y);
            
        }
        
        return ans;
    }
};