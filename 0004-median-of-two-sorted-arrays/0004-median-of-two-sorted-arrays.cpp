class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++) ans.push_back(nums1[i]);
        for(int i = 0; i < nums2.size(); i++) ans.push_back(nums2[i]);
        
        sort(ans.begin(),ans.end());
        double mid = 0;
        if(ans.size() % 2 == 0)
        {
            int sz = ans.size() / 2;

            mid = (ans[sz] + ans[sz - 1]) / 2.00;
        }
        else
        {
            int sz = ans.size() / 2;
            mid = ans[sz];
        }

     
        return mid;
    }
};