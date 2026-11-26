class Solution {
public:
    bool canAliceWin(int n) {
        int cnt=0,sub=10;
        while(n-sub>=0){
            n=n-sub;
            cnt++;
            sub--;
        }
        if(cnt%2==0)
            return false;
        return true;
    }
};