class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());         //O(nlogn)
        int i;
        for(i=0;i<nums.size();i++)  //O(n)
        {
            if(nums[i]!=i)
                return i;
        }
    return i;
    }
};