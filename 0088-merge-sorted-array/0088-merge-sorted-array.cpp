class Solution {
public:
    void merge_sort(vector<int> &arr, int str, int mid, int end)
    {
        vector<int> tmp;
        int i = str, j = mid + 1;

        while(i <= mid && j <= end)
        {
            if(arr[i] <= arr[j])
            {
                tmp.push_back(arr[i]);
                i++;
            }
            else
            {
                tmp.push_back(arr[j]);
                j++;
            }
        }

        while(i <= mid)
        {
            tmp.push_back(arr[i]);
            i++;
        }

        while(j <= end)
        {
            tmp.push_back(arr[j]);
            j++;
        }

        for(int idx = 0; idx < tmp.size(); idx++)
        {
            arr[idx + str] = tmp[idx];
        }
    }

    void mergeSort(vector<int> &arr , int str, int end)
    {
        if(str < end)
        {
            int mid = str +(end - str)/2;

            mergeSort(arr, str, mid); // left
            mergeSort(arr, mid +1, end); // right

            merge_sort(arr, str, mid, end);
        }
    }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        for(int i = 0 ; i < n; i++)
        {
            nums1[m + i] = nums2[i];  
        }
        mergeSort(nums1,0,(n+m)-1);
    }
};