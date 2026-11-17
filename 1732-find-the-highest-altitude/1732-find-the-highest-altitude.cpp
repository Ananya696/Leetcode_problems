class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxGain=0;
        int sum=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            maxGain=max(maxGain,sum);
        }
        return maxGain;
    }
};