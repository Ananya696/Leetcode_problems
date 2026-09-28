class Solution {
public:
    int maxDepth(string s) {
        int max_val=0;
        int c=0;
        for(auto ch:s){
            if(ch=='('){
                c++;
                max_val=max(max_val,c);
            }
            else if(ch==')'){
                c--;
            }
        }
        return max_val;
    }
};