class Solution {
public:
    int isValid(vector<int>& products, int mid)
    {
        int pro = 0, sum = 0;

        for(int i = 0; i < products.size(); i++)
        {
            double x = products[i];
            pro+= ceil(x / mid);
        }

        return pro;
    }
    int minimizedMaximum(int n, vector<int>& products) {
        int st = 1, end = *max_element(products.begin(),products.end()) , ans = 0;
        

        while(st <= end)
        {
            int mid = (st + end)/2;

            if(isValid(products,mid) <= n)
            {
                ans = mid;
                end = mid -1;
                
            }
            else st = mid +1;
        } 

        return ans;
    }
};