class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0, left = 0, right = height.size() -1;

        while(left < right)
        {
            int w = right - left;
            ans = max(ans, w * min(height[left], height[right]));

            height[left] < height[right] ? left++ : right--;
        }
        return ans;
    }
};