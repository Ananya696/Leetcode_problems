class Solution {
public:
    string reverseWords(string s) {

        string str;
        int check = 0;
        int st = 0, end;

        for(int i = s.length() - 1; i >= 0; i--) {

            if(s[i] != ' ')
                str.push_back(s[i]);

            else if(s[i] == ' ' && (str.empty() || str.back() == ' '))
                continue;

            else {

                end = str.length() - 1;

                while(st <= end) {
                    swap(str[st], str[end]);
                    st++;
                    end--;
                    check = 1;
                }

                if(check)
                    str.push_back(' ');

                check = 0;
                st = str.length();
            }
        }

        // Remove extra trailing space
        if(!str.empty() && str.back() == ' ')
            str.pop_back();

        // Reverse the remaining first word
        end = str.length() - 1;

        while(st < end) {
            swap(str[st], str[end]);
            st++;
            end--;
        }

        return str;
    }
};