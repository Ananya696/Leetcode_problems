class Solution {
public:
    string convert(string s, int numRows) {
       vector<vector<char>>str(numRows);
       int ind=0;
       while(ind<s.size()){
           for(int i=0;i<numRows && ind < s.size();i++)
           {
            str[i].push_back(s[ind]);
            ind++;
           }
           for(int j=numRows-2;ind<s.size() && j>=1;j--)
           {
            str[j].push_back(s[ind]);
            ind++;
           }
       }
       string fs="";
       for(int i=0;i<numRows;i++)
       {
        for(int j=0;j<str[i].size();j++)
        {
            fs.push_back(str[i][j]);
        }
       }
       return fs; 
    }
};