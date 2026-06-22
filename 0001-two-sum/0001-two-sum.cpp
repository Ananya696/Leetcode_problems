class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>vec1(nums);
        vector<int>vec;
        vector<int>vec2;
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]+nums[j]>target)
                j--;
            else if(nums[i]+nums[j]<target)
                i++;
            else
            {
                vec.push_back(nums[i]);
                vec.push_back(nums[j]);
                break;
            }        
        }
        for(int i=0;i<nums.size();i++)
        {
            if(vec[0]==vec1[i]||vec[1]==vec1[i])
            {
                vec2.push_back(i);
            }
        }
        return vec2;
    }
};