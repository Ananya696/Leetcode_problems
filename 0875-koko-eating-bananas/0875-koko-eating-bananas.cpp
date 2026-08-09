class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxe=*max_element(piles.begin(),piles.end());            //O(n)
        int l=1,r=maxe,mid;
        long long hrs;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            hrs=0;
            for(int i=0;i<piles.size();i++)
            {  
                if(mid>piles[i])
                    hrs++;
                else if(mid<piles[i])
                {
                    hrs+=piles[i]/mid;
                    if(piles[i]%mid!=0)
                        hrs++;
                }
                else 
                    hrs++;
            }
            if(hrs<=h)
                r=mid-1;
            else
                l=mid+1;
        }
        return l;                           //TC=nlog(maxe)
    }
};