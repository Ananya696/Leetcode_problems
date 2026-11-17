class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ans;int val;
        int totalSum=0,currSum=0,leftSum=0;
        for(auto n:nums)   
            totalSum+=n;
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            val=abs((totalSum-currSum)-leftSum);
            ans.push_back(val);
            leftSum=currSum;
        }
        return ans;
    }
};