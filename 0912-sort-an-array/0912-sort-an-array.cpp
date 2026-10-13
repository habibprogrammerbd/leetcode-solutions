class Solution {
public:
    void merge(vector<int>& arr, int str,int mid, int end)
    {
        vector<int> ans;
        int i = str, j = mid +1;

        while(i <= mid && j <= end)
        {
            if(arr[i] <= arr[j])
            {
                ans.push_back(arr[i]);
                i++;
            }
            else
            {
                ans.push_back(arr[j]);
                j++;
            }
        }

        while(i <= mid)
        {
            ans.push_back(arr[i]);
            i++;
        }

        while(j <= end)
        {
            ans.push_back(arr[j]);
            j++;
        }

        for(int idx = 0; idx < ans.size(); idx++)
        {
            arr[idx + str] = ans[idx];
        }
    }
    void mergeSort(vector<int>& arr, int str, int end)
    {
        if(str < end)
        {
            int mid = str +(end - str)/2;

            mergeSort(arr, str, mid); // left
            mergeSort(arr, mid +1, end); // right

            merge(arr,str, mid, end);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};