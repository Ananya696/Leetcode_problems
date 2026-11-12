class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int Icnt=1,Dcnt=1,Imaxcnt=1,Dmaxcnt=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                Icnt++;
                Imaxcnt=max(Icnt,Imaxcnt);
                Dcnt=1;
            }
            else if(nums[i]>nums[i+1]){
                Dcnt++;
                Dmaxcnt=max(Dcnt,Dmaxcnt);
                Icnt=1;
            }
            else
                Icnt=1,Dcnt=1;
        }
        return max(Imaxcnt,Dmaxcnt);
    }
};