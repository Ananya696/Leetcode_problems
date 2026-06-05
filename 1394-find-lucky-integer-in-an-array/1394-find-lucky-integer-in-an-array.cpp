class Solution {
public:
    int findLucky(vector<int>& arr) {
        int c,large=-1;
        for(int i=0;i<arr.size();i++)
        {   c=0;
            for(int j=0;j<arr.size();j++)
            {
                if(arr[i]==arr[j])
                    c++;
            }
            if(c==arr[i]&&arr[i]>large)
                large=arr[i];
        }
        return large;
        
    }
};