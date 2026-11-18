class Solution {
public:
    long long isValid(vector<int>& products, int mid)
    {
        long long pro = 0, sum = 0;

        for(int i = 0; i < products.size(); i++)
        {
            double x = products[i];
            pro+= ceil(x / mid);
        }

        return pro;
    }
    int minimizedMaximum(int n, vector<int>& products) {
        long long st = 1, end = accumulate(products.begin(),products.end(),0LL), ans = 0;
        

        while(st <= end)
        {
            long long mid = (st + end)/2;

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