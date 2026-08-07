class Solution {
public:
    int mySqrt(int x) {
    int ans=0;
    if (x==0)
        return 0;
    else{
        int l=1,h=x;
        long long mid;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            if(mid*mid>x)
                h=mid-1;
            else if(mid*mid<=x)
            {   ans=mid;
                l=mid+1;
            }
        }
        return ans;
    }
    return ans;
    }
};