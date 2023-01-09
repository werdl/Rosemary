#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <map>
#include <cstring>
#include <fstream>
using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector; using std::istringstream;
using std::stringstream;
std::map<string, string> strings;
std::map<string, string> ints;
std::map<string, string> floats;
void newvar(string varname,string value) {
    strings[varname]=value;
}
void getvar(string f1i) {
    auto iter = strings.begin();
            while (iter != strings.end()) {
        if (f1i==iter->first) {
            cout <<iter->second;
        }
        ++iter;
    }

    auto iteri = ints.begin();
            while (iteri != ints.end()) {
        if (f1i==iteri->first) {
            cout <<iteri->second;
        }
        ++iteri;
    }

    auto iterf = floats.begin();
            while (iterf != floats.end()) {
        if (f1i==iterf->first) {
            cout <<iterf->second;
        }
        ++iterf;
    }
}


void newint(string varname,string value) {
    ints[varname]=value;
}
void newfloat(string varname,string value) {
    floats[varname]=value;
}

void parse(string tokens) {

	string print="print";
	string exita="exit";
    string intd = "int";
    string stringd = "string";
    string floatd = "float";
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
string f1,f1i,f3,f4i,f4,f5,f5i,f6,f6i;
    if (t==0) {}
    if (t>1) {  f1=tokens.substr(0,1);
           f1i=tokens.substr(1,tokens.length());}
    if (t>3) {     f3=tokens.substr(0,3);}
    if (t>4) {      f4=tokens.substr(0,4);
          f4i=tokens.substr(4,tokens.length());}
    if (t>5) {     f5=tokens.substr(0,5); f5i=tokens.substr(5,tokens.length());}
    if (t>6) {     f6=tokens.substr(0,6); f6i=tokens.substr(6,tokens.length());}


		if (f5==print) {
		}
		else if (f3==intd) {
            newint(lex[2],lex[4]); 
        }
        else if (f6==stringd) {
            string lex4=lex[4];
            for (unsigned int i = 0; i < strlen(chars); ++i)

{

lex4.erase (std::remove(lex4.begin(), lex4.end(), chars[i]), lex4.end());

}
            newvar(lex[2],lex4); 
            
        }
        else if (f5==floatd) {
            newfloat(lex[2],lex[4]); 
        }
        else if (f1==dollr) {
            getvar(f1i);
            cout <<endl;
;        }
        
    }

int main(int argc, char** argv){
    string e2[6];    
    for (int i = 0; i < argc; ++i) {
        e2[i]=argv[i];
    }   
    string checkfor="";
    if (e2[1]==checkfor) {
    while (1) {
    cout << '>';
    string tokens;
    getline(cin,tokens);
    parse(tokens);
    }
} else {
    string mystring;
std::ifstream myfile (e2[1]);
if ( myfile.is_open() ) {
char mychar;
while ( myfile ) {
mychar = myfile.get();
std::cout << mychar;
}
} // pipe stream's content to standard output

}
}