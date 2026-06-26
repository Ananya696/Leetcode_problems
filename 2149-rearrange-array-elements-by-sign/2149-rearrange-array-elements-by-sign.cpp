class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
    vector<int>vec1;
     vector<int>vec2;
     for(int i=0;i<arr.size();i++)
     {
         if(arr[i]>=0)
            vec1.push_back(arr[i]);
        else
            vec2.push_back(arr[i]);
     }
     for(int i=0,j=0;i<arr.size();i+=2,j++)
     {
         if(j<vec1.size()&&j<vec2.size())
         {
            arr[i]=vec1[j];
            arr[i+1]=vec2[j];
         }
         else if(j>=vec1.size()&&j<vec2.size())
         {
             arr[i]=vec2[j];
             i--;  
         }
         else if(j<vec1.size()&&j>=vec2.size())
         {
             arr[i]=vec1[j];
             i--;
         }
     }
     return arr;
    }
};