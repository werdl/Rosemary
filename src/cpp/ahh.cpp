#include <iostream>
#include <string>
using namespace std;

int main()
{
	bool shell=true;
	while (shell=true) {
		//start getting string and splitting
		string given_str;
		cout << ">";
		cin >> given_str;
		string token0;
		string token1;
		string delim="~";
		size_t pos = 0;
		string tokens[4];
		while (( pos = given_str.find (delim)) != std::string::npos)
		{
		token1 = given_str.substr(0, pos); // store the substring 
		tokens[0]=token1;
		given_str.erase(0, pos + delim.length());  /* erase() function store the current positon and move to next token. */ 
		}
		tokens[1]=given_str;
		//end getting string
		string print="print";
		string exit="exit";
		if (tokens[0]==print) {
			cout <<tokens[1]<<endl;
		}
		if (tokens[0]==exit) {
			shell=false;
		}
		cout << "\n";
	}
}
