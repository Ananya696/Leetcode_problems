class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int e;
        for(int i=0;i<nums.size();i++)
        {
            e=target-nums[i];
            if(m.find(e)!=m.end())
            {
             return {m[e],i};
            }
            m[nums[i]]=i;
        }   
        return {};
    }
};