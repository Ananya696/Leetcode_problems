class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>vec;int maxe=-1;
        for(int i=arr.size()-1;i>=0;i--)
        {
            vec.push_back(maxe);
            maxe=max(maxe,arr[i]);
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};