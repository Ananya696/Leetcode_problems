class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vec;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    vec.push_back(nums1[i]);
                    break;
                }
            }
        }
        for(int i=0;i<vec.size();i++)
        {
            for(int j=i+1;j<vec.size();)
            {
                if(vec[i]==vec[j])
                    vec.erase(vec.begin()+j);
                else
                    j++;
            }
        }
        return vec;
    }
};