class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int e;
        vector<int>vec;
        for(int i=0;i<nums.size();i++)
        {
            e=target-nums[i];
            if(m.find(e)!=m.end())
            {
                vec.push_back(i);
                vec.push_back(m[e]);
            }
            m[nums[i]]=i;
        }   
        return vec;
    }
};