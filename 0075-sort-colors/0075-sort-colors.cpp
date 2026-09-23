// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int k=0,z=0,o=0,i;
//         while(k<nums.size()){
//             if(k==0 && nums[z]==0)
//             {
//                 swap(nums[z],nums[k]);
//                 k++,z++;
//             }
//             else if(nums[z]==0 && k!=0)
//             {   
//                 for(i=k-1;i>=0;i--)
//                 {
//                     if(nums[i]>nums[z])
//                     {
//                         continue;
//                     }
//                     else
//                         break;
//                 }
//                 swap(nums[z],nums[i+1]);
//                 swap(nums[z],nums[k]);
//                 k++,z++;
//             }
//             else if(nums[o]==1)
//             {
//                 swap(nums[o],nums[k]);
//                 k++,o++;
//             }
//             else
//                 z++,o++;
//         }
//         return;
//     }
// };

class Solution {
public:
    void sortColors(vector<int>& nums) {
      int mid=0,rzero=0,rtwo=nums.size()-1;
      while(mid<=rtwo){
        if(nums[mid]==0)
        {
            swap(nums[mid],nums[rzero]);
            mid++,rzero++;
        }
        else if(nums[mid]==1)
            mid++;
        else{
            swap(nums[mid],nums[rtwo]);
            rtwo--;
        }
      }
    }
};