class Solution {
public:
    int compress(vector<char>& chars) {
        
        int idx = 0, sz = chars.size();

        for(int i = 0; i < sz;)
        {
            char curr = chars[i];
            int count = 0;

            while(i < sz && chars[i] == curr)
            {
                count++,i++;
            }

            if(count == 1) chars[idx++] = curr;
            else
            {
                chars[idx++] = curr;
                string s = to_string(count);
                for(char x : s)
                {
                    chars[idx++] = x;
                }
            }
        }

        return idx;
    }
};