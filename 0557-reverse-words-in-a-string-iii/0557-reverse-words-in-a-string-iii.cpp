class Solution {
public:
string reverseWords(string s) {
   int st=0,end;
   for(int i=0;i<=s.length();i++)
   {
        if(s[i]==' '||s[i]=='\0')
        {
            end=i-1;
            while(st<end)
            {
                if(s[st]!=s[end])
                    swap(s[st],s[end]);
                st++;
                end--;
            }
            st=i+1;
        }
   }
   return s;
}
};