class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxEle=0;
        for(int i=0;i<nums.size();i++)
            maxEle=max(maxEle,nums[i]);
        int sum=0;
        while(k--){
            sum+=maxEle;
            maxEle++;
        }
        return sum;
    }
};