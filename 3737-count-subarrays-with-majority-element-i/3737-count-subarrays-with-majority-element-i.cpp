class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int c,count=0;
        for(int i=0;i<nums.size();i++)
        {   c=0;
            for(int j=i;j<nums.size();j++)
            {
                if(nums[j]==target)
                    c++;
                if(c>(j+1-i)/2)
                    count++;
            }
        }
        return count;
    }
};