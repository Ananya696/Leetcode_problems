class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int i=0,j=i+1,ans=INT_MIN;
     while(j<prices.size())
     { 
        ans=max(ans,prices[j]-prices[i]);
        if(prices[j]-prices[i]<=0)
        {
            i=j;
            j=i+1;
        }
        else
            j++;
     }
     if(ans<0)
        return 0;
    else
        return ans;
    }
};