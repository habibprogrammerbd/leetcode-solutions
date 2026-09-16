class Solution {
public:
    void reverseString(vector<char>& s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        
        int left = 0, right = s.size() -1;
        while(left <= right)
        {
            swap(s[left],s[right]);
            left++,right--;
        }

        for(auto x : s)
            cout << x << " " ;
    }
};