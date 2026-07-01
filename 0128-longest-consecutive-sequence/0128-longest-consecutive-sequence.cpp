class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int l=1,c=1;
        if(nums.size()==0)
            return 0;
        sort(nums.begin(),nums.end());  //O(nlogn)
        for(int i=0;i<nums.size()-1;i++)     //O(n)
        {
            if(nums[i]+1==nums[i+1])
                c++;
            else if(nums[i]!=nums[i+1])
            {
                l=max(l,c);
                c=1;
            }
        }
        l=max(l,c);
        return l;
    }
};