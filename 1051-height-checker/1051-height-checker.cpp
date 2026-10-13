// bubble sort

class Solution {
public:
    vector<int> bubbleSort(vector<int> arr)
    {
        int sz = arr.size();
        for(int i = 0; i < sz -1; i++)
        {
            bool isSorted = false;

            for(int j = 0; j < sz - i -1; j++)
            {
                if(arr[j] > arr[j +1])
                {
                    swap(arr[j], arr[j +1]);
                    isSorted = true;
                }
            }
            if(!isSorted) break;
        }

        return arr;
    }
    int counting(vector<int> arr1,vector<int> arr2)
    {
        int count = 0;
        for(int i = 0; i < arr1.size(); i++)
        {
            if(arr1[i] != arr2[i]) count++;
        }
        return count;
    }
    int heightChecker(vector<int>& heights) {

        vector<int> arr = bubbleSort(heights);
        return counting(arr,heights);;
    }
};