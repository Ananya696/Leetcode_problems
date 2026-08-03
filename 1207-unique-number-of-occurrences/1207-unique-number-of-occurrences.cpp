class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());               //O(nlogn):TC
        map<int,int>m;                             //O(log n):SC
        // int freq=0;
        int c=1;
        for(int i=0;i<arr.size();i++)             //O(n)
        {
            if(i!=arr.size()-1 && arr[i]==arr[i+1])
                c++;
            else
            {   if(m.find(c)!=m.end())
                    return false;
                m[c]=arr[i];
                c=1;
            } 
        }
        // for(auto x:m)
        // {
        //     if(freq==x.first)
        //         return false;
        //     freq=x.first;
        // }
        return true;
    }
};