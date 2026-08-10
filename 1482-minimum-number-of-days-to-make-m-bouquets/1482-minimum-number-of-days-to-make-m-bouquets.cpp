class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k>bloomDay.size())
            return -1;
        int maxe=*max_element(bloomDay.begin(),bloomDay.end()),ans;
        int mine=*min_element(bloomDay.begin(),bloomDay.end()),mid,cm,c;
        int l=mine,h=maxe;
        while(l<=h)    //O(log(maxe-mine+1))
        {
            mid=l+(h-l)/2;
            cm=0,c=0;
            for(int i=0;i<bloomDay.size();i++)        //O(n)
            {
                if(bloomDay[i]<=mid)
                    c++;
                else{
                    cm=cm+c/k;
                    c=0;
                }
            }
            cm=cm+c/k;
            if(cm>=m)
            {
                ans=mid;
                h=mid-1;
            }
            else
                l=mid+1;
        }
        return ans;                  //O(nlog(maxe-mine+1))  hence not tle since worst case will have 30*10^5
    }
};