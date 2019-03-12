#include<list>
#include<iostream>
#include<fstream>
#include<string>
#include<map>
#include<regex>

//Structures for the various tokens
struct token_format_entry
{
	regex format;
	string type;
}

struct token_entry
{
		
}

int main()
{
	// file 
	ifstream file("prog.txt");
	string line;

	//Database
	vector<token_format_entry> TokenFormat;
	vector<token_entry> tokens;

	//Read file
}