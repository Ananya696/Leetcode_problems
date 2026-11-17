class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int startValue=1;
        int val,flag;
        while(true){
            flag=0;
            val=startValue;
            for(int i=0;i<nums.size();i++){
                val=val+nums[i];
                if(val<1)
                {
                    flag=1;
                    break;
                }
            }
        if(flag==0)
            return startValue;
        startValue++;
        }
    }
};