class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maxe=nums[0];
        for(int i=1;i<nums.size();i++)        //O(n)
            if(nums[i]>maxe)
                maxe=nums[i];
        sort(nums.begin(),nums.end());        //O(n log n)
        if(nums.size()!=maxe+1)
            return false;
        else{
            for(int i=1;i<=maxe;i++)            //O(maxe)~O(n) for good array
            {
                if(nums[i-1]!=i)
                    return false;
            }
            if(nums[maxe]!=maxe)
                return false;
            return true;
        }                                
    }
};