class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,ans,c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
                ans=nums[i];
                count++;
            }
            else if(ans==nums[i])
                count++;
            else 
                count--;
        }
       for(int i=0;i<nums.size();i++)
            if(nums[i]==ans)
                c++;
        if(c>nums.size()/2)
            return ans;
        else return -1;
    }
};