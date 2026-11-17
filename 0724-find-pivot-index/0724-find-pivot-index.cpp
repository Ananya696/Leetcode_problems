class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>vec;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            vec.push_back(sum);
        }
        int i;
        for(i=0;i<nums.size();i++){
            if(i==0)
            {
                if(vec[nums.size()-1]-vec[i]==0)
                    return 0;
            }
            else if(vec[nums.size()-1]-vec[i]==vec[i-1])
                    return i;
        }
        return -1;
    }
};