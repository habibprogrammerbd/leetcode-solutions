class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        
        sort(str.begin(),str.end());

        string s = "";

        for(int i = 0; i < min(str[0].size(),str[str.size()-1].size()); i++)
        {
            if(str[0][i] == str[str.size()-1][i]) s+=str[0][i];
            else break;
        }


        return s;
    }
};