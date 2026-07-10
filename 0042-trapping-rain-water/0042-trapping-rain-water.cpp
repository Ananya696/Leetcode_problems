class Solution {
public:
    int trap(vector<int>& height) {
        // brute force:

        // int sum=0,left_max,right_max;
        // for(int i=1;i<height.size()-1;i++)
        // {  left_max=0,right_max=0;
        //     for(int j=0;j<=i;j++)
        //     {
        //         left_max=max(left_max,height[j]);
        //     }
        //     for(int k=i;k<height.size();k++)
        //     {
        //         right_max=max(right_max,height[k]);
        //     }
        //     sum=sum+(min(left_max,right_max)-height[i]);
        // }
        //   return sum;



        // better 



        // int sum=0;
        // vector<int>left_arr(height.size(),0);
        // vector<int>right_arr(height.size(),0);

        // left_arr[0]=height[0];
        // for(int i=1;i<height.size();i++)
        //     left_arr[i]=max(left_arr[i-1],height[i]);

        // right_arr[height.size()-1]=height[height.size()-1];
        // for(int j=height.size()-2;j>=0;j--)
        //     right_arr[j]=max(right_arr[j+1],height[j]);
        
        // for(int i=0;i<height.size();i++)
        //     sum+=min(left_arr[i],right_arr[i])-height[i];
        // return sum;



        // using stack but same complexity as better:






        // Monotonic stack





        //two pointers approach

        int lmax=0,rmax=0,l=0,r=height.size()-1,total=0;
        while(l<r)
        {
            if(height[l]<height[r])
            {
                //processing the left
                if(lmax>height[l])
                    total=total+(lmax-height[l]);
                else
                    lmax=height[l];
                l++;
            }
            else{
                //processing the right
                if(rmax>height[r])
                    total+=(rmax-height[r]);
                else
                    rmax=height[r];
                r--;
            }
        }
        return total;
    }
  
};