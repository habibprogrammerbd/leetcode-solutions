class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int> a;
        int sz = nums.size() - k; 
        for(int i = sz; i < nums.size() ; i++)
        {
            a.push_back(nums[i]);
        }
       
        a.insert(a.end(), nums.begin(), nums.begin()+sz);
        nums = a;
        return ;
    }
};