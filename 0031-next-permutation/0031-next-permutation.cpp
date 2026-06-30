class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    int index=-1,min=INT_MAX,sm_in=nums.size()-1;
    for(int i=nums.size()-2;i>=0;i--)         //O(n)
    {
        if(nums[i]<nums[i+1])
        {
            index=i;
            break;
        }
    }
    if(index==-1)
        reverse(nums.begin(),nums.end());
    else
    {
        for(int i=nums.size()-1;i>index;i--)                //O(n)
        {
            if(nums[i]>nums[index])
            {
                swap(nums[index],nums[i]);
                break;
            }
        }
        reverse(nums.begin()+(index+1),nums.end());  //O(n)
    }
}
};