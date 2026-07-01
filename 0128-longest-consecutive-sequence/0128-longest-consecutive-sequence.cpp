class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        int c=1,l=0;
    if(nums.size()==0)
        return l;
    for(auto e:nums)        //O(n)
        s.insert(e);
    for(auto e:s){                                  
        if(s.find(e-1)==s.end())
        {
            while(s.find(e+1)!=s.end())
            {   
                c++;                       //O(2n) {for+while},,dry run using eg nd then check
                e=e+1;
            }
            l=max(l,c);
            c=1;
        }
    }
    return l;
    }
};