#include<list>
#include<iostream>
#include<fstream>
#include<string>
#include<map>
#include<regex>

//Structures for tokens
struct token_format_entry
{
	regex format;
	string type;
}

struct token_entry
{
	string token;
	string type;
}
void tokenize(string word, vector<token_format_entry> &TokenFormat, vector<token_entry> &tokens)
{
	char c_word = word.c_str();
	int i;
	int start=0, end, len = word.size();

	string token="", next_token="";

//Traverse word char by char
	for(i=0;i<len;i++)
	{
		next_token.append(c_word[i]);
		if(is_valid(next_token, TokenFormat))
		{
			token=next_token;
		}
		else
		{
			tokens.push()
		}

	}
}


int main()
{
	// file 
	ifstream file("prog.txt");
	string word;

	//Database
	vector<token_format_entry> TokenFormat;
	vector<token_entry> tokens;

	//Read file
	while( file >> word )
	{
		tokenize(word, TokenFormat, tokens);
	}
	return 0;
}