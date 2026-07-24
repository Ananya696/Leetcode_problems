class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int j=0;
        for(int x:pushed)//O(n)
        {
            st.push(x);
            while(!st.empty()&&st.top()==popped[j])//O(1)
            {
                st.pop();
                j++;
            }
        }
        return st.empty();                    //space O(n)
    }
};