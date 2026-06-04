class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int element=nums[0];
        int j=1;
        int k=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=element)
            {
                element=nums[i];
                k++;
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return k;
    }
};