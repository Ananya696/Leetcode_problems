class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int element=nums[0];
        int k=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=element)
            {
                element=nums[i];
                nums[k]=element;
                k++;
            }
        }
        return k;
    }
};