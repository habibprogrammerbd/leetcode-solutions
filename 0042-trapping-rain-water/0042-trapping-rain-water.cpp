class Solution {
public:
    int trap(vector<int>& heg) {
        int n = heg.size(), sum = 0;
        vector<int> lmax(n,0), rmax(n,0);

        lmax[0] = heg[0], rmax[n-1] = heg[n-1];
        for(int i = 1; i < n; i++)
        {
            lmax[i] = max(lmax[i -1],heg[i]);
        }
        for(int i = n -2; i >=0; i--)
        {
            rmax[i] = max(rmax[i +1],heg[i]);
        }

        for(int i =0; i < n; i++)
        {
            sum+=min(lmax[i],rmax[i])-heg[i];
        }
        return sum;
    }
};