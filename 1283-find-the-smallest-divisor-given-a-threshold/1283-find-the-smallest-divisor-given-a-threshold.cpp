class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxe=*max_element(nums.begin(),nums.end());
        // int mine=*min_element(nums.begin(),nums.end());
        int l=1,h=maxe,sum=0,mid;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            sum=0;
            for(int i=0;i<nums.size();i++)
                sum=sum+ceil((float)nums[i]/mid);               //smallest divisor=mid              
            if(sum<=threshold)
                h=mid-1;
            else    
                l=mid+1;
        }
        return l;
    }
};