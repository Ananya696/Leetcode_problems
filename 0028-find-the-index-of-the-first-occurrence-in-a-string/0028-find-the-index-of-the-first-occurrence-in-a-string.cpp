class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.length();
        string s;
        if(n>haystack.length())
            return -1;
        else
        for(int i=0;i<=haystack.size()-n;i++)
        {   s="";
           for(int j=i;j<=i+n-1;j++)
           {
                s+=haystack[j];
           }
           if(s==needle)
            return i;
        }
        return -1;
     }
};