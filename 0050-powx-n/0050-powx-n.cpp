class Solution {
public:
    double power(double bess, long long pow)
    {
        double ans = 1.0;bool isNa = false;
        if(pow < 0)
        {
            isNa = true;
            pow = abs(pow);
        }

       
        while(pow > 0)
        {
            if(pow % 2 != 0)
            {
                ans*=bess;
                pow--;
            }
            else
            {
                bess*=bess;
                pow/=2;
            }
        }

        if(isNa)
        {
            return 1.0 / ans;
        }
       
        return ans;
    }
    double myPow(double x, int n) {
        return power(x,n);
    }
};