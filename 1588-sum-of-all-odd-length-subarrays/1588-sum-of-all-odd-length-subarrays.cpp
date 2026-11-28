class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
     int ans=0;
     for(int i=0;i<arr.size();i++){
        ans+=arr[i];
        arr[i]=ans;
     }
    ans=0;
     for(int i=0;i<arr.size();i++){
       for(int j=i;j<arr.size();j+=2){
                if(i-1>=0)
                    ans+=(arr[j]-arr[i-1]);
                else 
                    ans+=arr[j];
            }
        }
        return ans;
    }
};