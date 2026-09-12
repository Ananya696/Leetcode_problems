class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0;s[i]!='\0';i++)  //O(n)
        {
            if(s[i]>=97&&s[i]<=122)
                str.push_back(s[i]);
            else if(s[i]>=65&&s[i]<=90)
                 str.push_back(s[i]-'A'+'a');
            else if(s[i]>=48&&s[i]<=57)
                str.push_back(s[i]);
        }
        int st=0,end=str.length()-1;
        while(st<end){                  //O(n/2)
            if(str[st]!=str[end])
                return false;
            st++;
            end--;
        }
        return true;              //O(n)
    }
};