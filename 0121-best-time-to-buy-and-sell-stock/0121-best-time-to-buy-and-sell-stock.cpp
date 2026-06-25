class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int i=0,j=i+1,ans=0;
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
        return ans;
    }
};