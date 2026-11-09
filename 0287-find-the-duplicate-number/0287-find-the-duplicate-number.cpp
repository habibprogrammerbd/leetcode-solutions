class Solution {
public:
    int findDuplicate(vector<int>& num) {
        int slow = num[0], fast = num[0];
        do{
            slow = num[slow];
            fast = num[num[fast]];
        }while(slow != fast);

        slow = num[0];

        while(slow != fast)
        {
            slow = num[slow];
            fast = num[fast];
        }

        return slow;
    }
};