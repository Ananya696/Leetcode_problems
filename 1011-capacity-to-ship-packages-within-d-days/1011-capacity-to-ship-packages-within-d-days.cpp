class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
       long long h=0;
       for(int i=0;i<weights.size();i++)
            h+=weights[i];
        int l=*max_element(weights.begin(),weights.end());
        long long mid;
        int c,day_w;
        while(l<=h)
        {   
            day_w=0,c=0;
            mid=l+(h-l)/2;
            for(int i=0;i<weights.size();i++)
            { 
                day_w+=weights[i];
                if(day_w>mid)
                {
                    day_w=0;
                    i--;
                    c++;
                }
            }
            c++;
            if(c<=days)
                h=mid-1;
            else 
                l=mid+1;
        }
        return l;
    }
};