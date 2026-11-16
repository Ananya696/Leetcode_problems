class Solution {
public:
    string digitSum(string s, int k) {
      int sum;
      string str;
      while(s.length()>k){
        for(int i=0;i<s.length();i+=str.length()){
            sum=0;
            for(int j=i;j<s.length() && j<i+k;j++)
                sum=sum+(s[j]-48);
            str=to_string(sum);
            s.erase(i,k);
            s.insert(i,str);
            }      
        }
        return s;
    }
};