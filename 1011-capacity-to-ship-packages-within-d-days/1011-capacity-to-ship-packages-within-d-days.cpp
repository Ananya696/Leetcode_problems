class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
       long long h=0;
       for(int i=0;i<weights.size();i++)
            h+=weights[i];
        int l=*max_element(weights.begin(),weights.end());
        long long mid;
        int cal_days,sum_pack,ans;
        while(l<=h)
        {   
            mid=l+(h-l)/2;
            cal_days=0,sum_pack=0;
            for(int i=0;i<weights.size();i++)
            { 
                sum_pack+=weights[i];
                if(sum_pack>mid)
                {
                    sum_pack=0;
                    i--;
                    cal_days++;
                }
            }
            cal_days++;
            if(cal_days<=days)
            {
                ans=mid;
                h=mid-1;
            }
            else 
                l=mid+1;
        }
        return ans;
    }
};