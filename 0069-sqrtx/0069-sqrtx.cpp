class Solution {
public:
    int mySqrt(int x) {
        int ans=0;
        long long i;
        for(i=1;i<=x;i++)
            {
                if(i*i<=x)
                    ans=i;
                else break;
            }
            return ans;
    }
};