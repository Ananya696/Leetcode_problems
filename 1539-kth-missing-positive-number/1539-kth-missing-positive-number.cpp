class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int var=1,pos_int=0,found;
        int boundary=*max_element(arr.begin(),arr.end())+k;
    while(var<=boundary)           
    {   found=0;
        for(int i=0;i<arr.size();i++)
        {
            if(var==arr[i])
            {
                found=1;
                break;
            }
        }
        if(found==0)
            pos_int++;
        if(pos_int==k)
            return var;
        var++;
    }
    return var;
    }
};