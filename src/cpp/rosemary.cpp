#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <map>
#include <cstring>
using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector; using std::istringstream;
using std::stringstream;
std::map<string, string>  variables;
string x22;
string newvar(string varname,string value) {
    variables[varname]=value;
    x22=variables[varname];
    return variables[varname];
}
void getvar(string varname2) {
    auto iter = variables.begin();
            while (iter != variables.end()) {
        if (varname2==iter->first) {
            cout <<iter->second;
        }
        ++iter;
    }
}
int main(){
    while (1) {
    string str;
    cout << '>';
    string tokens;
    getline(cin,tokens);
	string print="print";
	string exita="exit";
    string dollar = "int";
    string bob = "view";
    string dollr = "$";
    int x=0;
    string lex[100];
    stringstream ss(tokens);  
    string word;
    while (ss >> word) {
        x++;
        lex[x]=word;
    }


char chars[] = "\"\"''";


for (unsigned int i = 0; i < strlen(chars); ++i)

{

tokens.erase (std::remove(tokens.begin(), tokens.end(), chars[i]), tokens.end());

}
int t = tokens.length();
string f1,f1i,f3,f4i,f4,f5,f5i;
    if (t==0) {}
    if (t>1) {  f1=tokens.substr(0,1);
           f1i=tokens.substr(1,tokens.length());}
    if (t>3) {     f3=tokens.substr(0,3);}
    if (t>4) {      f4=tokens.substr(0,4);
          f4i=tokens.substr(4,tokens.length());}
    if (t>5) {     f5=tokens.substr(0,5); f5i=tokens.substr(5,tokens.length());}


		if (f5==print) {
		}
		else if (f3==dollar) {
            string x2 = newvar(lex[2],lex[4]);
            
        }
        else if (f1==dollr) {
            auto iter = variables.begin();
            while (iter != variables.end()) {
        if (f1i==iter->first) {
            cout <<iter->second;
        }
        ++iter;
    }
        }
        cout <<endl;
    }
}