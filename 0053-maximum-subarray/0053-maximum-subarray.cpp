class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum,maxs=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            maxs=max(sum,maxs);
            if(sum<0)
                sum=0;
        }
        return maxs;
    }
};