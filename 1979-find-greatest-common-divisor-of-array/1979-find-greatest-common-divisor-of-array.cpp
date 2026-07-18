class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min=nums[0],max=nums[0];        
        for(int i=0;i<nums.size();i++)        //O(n)
        {
            if(nums[i]<min)
                min=nums[i];
            if(nums[i]>max)
                max=nums[i];
        }
        for(int i=min;i>=1;i--)     //O(n)
        {
            if(min%i==0&&max%i==0)
                return i;
        }
        return 1;               //O(n+n)=O(2n)=O(n)
    }
};