class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    int index=0,min=INT_MAX,sm_in=nums.size()-1;
    for(int i=nums.size()-2;i>=0;i--)
    {
        if(nums[i]<nums[i+1])
        {
            index=i;
            break;
        }
    }
    for(int i=index+1;i<nums.size();i++)
    {
        if(nums[i]>nums[index]&&nums[i]-nums[index]<min)
        {
            min=nums[i]-nums[index];
            sm_in=i;
        }
    }
    swap(nums[index],nums[sm_in]);
    sort(nums.begin()+(index+1),nums.end());
    }
};