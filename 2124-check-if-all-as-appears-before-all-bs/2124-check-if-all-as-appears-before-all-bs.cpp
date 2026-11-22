class Solution {
public:
    bool checkString(string s) {
        for(int i=0;i<s.length()-1;i++){
            if(s[i+1]=='a'&&s[i]=='b')
                return false;
        }
        return true;
    }
};