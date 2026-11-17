class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            nums[i]=sum;
        }
        int i;
        for(i=0;i<nums.size();i++){
            if(i==0)
            {
                if(nums[nums.size()-1]-nums[i]==0)
                    return 0;
            }
            else if(nums[nums.size()-1]-nums[i]==nums[i-1])
                    return i;
        }
        return -1;
    }
};