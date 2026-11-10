class Solution {
public:
    int compress(vector<char>& chars) {
        int idx = 0;

        for(int i = 0; i < chars.size();)
        {
            int count = 0;
            char currChar = chars[i];

            while(i < chars.size() && currChar == chars[i])
            {
                count++,i++;
            }

            if(count == 1) chars[idx++] = currChar;
            else
            {
                chars[idx++] = currChar;
                for(char x : to_string(count))
                {
                    chars[idx++] = x;
                }
            }
            count = 0;
        }
        return idx;
    }
};