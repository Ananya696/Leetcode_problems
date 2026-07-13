class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
    int n=arr.size();
    if(n==0)
        return {};
    vector<int>vec(arr);
    unordered_map<int,int>m;
    sort(vec.begin(),vec.end());  //O(nlogn)
    int val=1;
    m[vec[0]]=1;
    for(int i=1;i<n;i++)       //O(n)
    {
        if(vec[i]>vec[i-1])
            m[vec[i]]=++val;
    }
    for(int i=0;i<n;i++)       //O(n)
    {
        vec[i]=m[arr[i]];
    }
    return vec; 
    }         //TC=O(nlogn=2n)==O(nlogn) ,,,, SC=O(2n)==O(n)
    
};