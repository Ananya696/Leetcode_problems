class Solution {
public:
string new_string;
void reverse_word(string& word){
	int st=0,end=word.length()-1;
	while(st<end)
	{
		if(word[st]!=word[end])
		{
			swap(word[st],word[end]);
			 
		}
		st++;
		end--;
	}
	for(int i=0;word[i]!='\0';i++)
	{
		new_string.push_back(word[i]);
	}
}
    string reverseWords(string s) {
        	string word="";
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]!=' ')
			word.push_back(s[i]);
		else{
			reverse_word(word);
			new_string.push_back(' ');
			word="";
		}
	}
	reverse_word(word);
	return new_string;
    }
};