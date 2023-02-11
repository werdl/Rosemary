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
string getvar(string varname2) {
    cout << varname2;
    string toreturn=variables[varname2];
    cout << toreturn;
    return toreturn;
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
    char dollr = '$';
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
    string f5=tokens.substr(0,5);
    string f3=tokens.substr(0,3);
     string f4=tokens.substr(0,4);
      string f1i=tokens.substr(1,tokens.length());
    string f5i=tokens.substr(5,tokens.length());
		if (f5==print) {
			cout <<f5i<<endl;
		}
        cout << endl;
		if (f3==dollar) {
            cout << "hli";
            string x2 = newvar(lex[1],lex[4]);
            cout << x2;
            
        }
        if (f4==bob) {
            cout << "vioew";
        string toreturn=variables.at(f5i);
        cout << f5i;
        cout << toreturn;
        }
        
    }
}