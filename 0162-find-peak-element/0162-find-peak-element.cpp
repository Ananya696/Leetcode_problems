class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=1,r=nums.size()-2,mid;
        while(l<=r)
        {   
            mid=l+(r-l)/2;
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])
                return mid;
            else if(nums[mid]>nums[mid+1])
                r=mid-1;
            else 
                l=mid+1;
        }
       if(nums[0]>nums[nums.size()-1])
            return 0;
        return nums.size()-1;
    }
};