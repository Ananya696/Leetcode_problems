class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>vec;
        int max=0;
        for(int i=0;i<arr.size()-1;i++)
        {   max=0;
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[j]>max)
                    max=arr[j];
            }
            vec.push_back(max);
        }
        vec.push_back(-1);
        return vec;
    }
};