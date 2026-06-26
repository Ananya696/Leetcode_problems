class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     int neg=1,pos=0;
     vector<int>vec(nums.size());
     for(int i=0;i<nums.size();i++)
     {
        if(nums[i]>0)
        {
            vec[pos]=nums[i];
            pos+=2;
        }
        else{
            vec[neg]=nums[i];
            neg+=2;
        }
     }   
     return vec;
    }
};