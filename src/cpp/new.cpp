#include <iostream>
#include <string>
using namespace std;
int main()
{
// given string with delimiter
string given_str;
cin >> given_str;
string delim = ";"; // delimiter

cout << " Your string with delimiter is: " << given_str << endl;
size_t pos = 0;

string token1; // define a string variable

// use find() function to get the position of the delimiters
while (( pos = given_str.find (delim)) != std::string::npos)
{
token1 = given_str.substr(0, pos); // store the substring 
cout << token1 << endl;
given_str.erase(0, pos + delim.length());  /* erase() function store the current positon and move to next token. */ 
}
cout << given_str << endl; // it print last token of the string.
}
