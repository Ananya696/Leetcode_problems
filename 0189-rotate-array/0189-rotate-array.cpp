class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int j=0;
    k=k%nums.size();
    if (k==0)
        return;
    for(int i=0;i<nums.size()/2;i++)
        swap(nums[i],nums[nums.size()-1-i]);

    for(int i=0;i<=(k-1)/2;i++)
        swap(nums[i],nums[k-1-i]);

    for(int i=k;i<=(k+nums.size()-1)/2;i++)
    {
        swap(nums[i],nums[nums.size()-1-j]);
        j++;
    }
    }
};