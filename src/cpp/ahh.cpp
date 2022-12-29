#include <iostream>
#include <string>
using namespace std;

int main()
{
	string given_str = "hello;world";
	string token0;
	string token1;
	string delim=";";
	size_t pos = 0;
	string tokens[4];
	while (( pos = given_str.find (delim)) != std::string::npos)
	{
	token1 = given_str.substr(0, pos); // store the substring 
	cout << token1 << endl;
	tokens[0]=token1;
	given_str.erase(0, pos + delim.length());  /* erase() function store the current positon and move to next token. */ 
	}
cout << given_str << endl; // it print last token of the string.
tokens[1]=given_str;
cout << tokens[0] << tokens[1];
}