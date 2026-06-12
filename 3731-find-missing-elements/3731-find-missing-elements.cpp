class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min=nums[0],max=nums[nums.size()-1],j=1;
        vector<int>vec;
        for(int i=min+1;i<=max-1;i++)
        {
            if(i!=nums[j])
                vec.push_back(i);
            else
                j++;
                
        }
        return vec;
    }
};