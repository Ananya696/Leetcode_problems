class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>vec;
        int eqel=0,lessele=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
                eqel++;
            else if(nums[i]<target)
                lessele++;
        }
        for(int i=lessele;i<lessele+eqel;i++)
            vec.push_back(i);
        return vec;
    }
};