class Solution {
public:
    int trap(vector<int>& heg) {
        int l = 0, r = heg.size() -1, sum = 0, lmax = 0, rmax = 0;

        while(l < r)
        {
            lmax = max(lmax,heg[l]);
            rmax = max(rmax,heg[r]);

            if(lmax < rmax) sum+=lmax-heg[l],l++;
            else sum+=rmax-heg[r],r--;
        }
        
        return sum;
    }
};