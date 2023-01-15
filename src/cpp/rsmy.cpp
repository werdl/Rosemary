#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <map>
#include <cstring>
#include <fstream>
#include "string.h"

using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector; using std::istringstream;
using std::stringstream;
std::map<string, string> strings;
std::map<string, int> ints;
std::map<string, float> floats;
double eval(string expr)
{
    string xxx; // Get Rid of Spaces
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] != ' ')
        {
            xxx += expr[i];
        }
    }

    string tok = ""; // Do parantheses first
    for (int i = 0; i < xxx.length(); i++)
    {
        if (xxx[i] == '(')
        {
            int iter = 1;
            string token;
            i++;
            while (true)
            {
                if (xxx[i] == '(')
                {
                    iter++;
                } else if (xxx[i] == ')')
                {
                    iter--;
                    if (iter == 0)
                    {
                        i++;
                        break;
                    }
                }
                token += xxx[i];
                i++;
            }
            //cout << "(" << token << ")" << " == " << to_string(eval(token)) <<  endl;
            tok += std::to_string(eval(token));
        }
        tok += xxx[i];
    }

    for (int i = 0; i < tok.length(); i++)
    {
        if (tok[i] == '+')
        {
            //cout << tok.substr(0, i) + " + " +  tok.substr(i+1, tok.length()-i-1) << " == " << eval(tok.substr(0, i)) + eval(tok.substr(i+1, tok.length()-i-1)) << endl;
            return eval(tok.substr(0, i)) + eval(tok.substr(i+1, tok.length()-i-1));
        } else if (tok[i] == '-')
        {
            //cout << tok.substr(0, i) + " - " +  tok.substr(i+1, tok.length()-i-1) << " == " << eval(tok.substr(0, i)) - eval(tok.substr(i+1, tok.length()-i-1)) << endl;
            return eval(tok.substr(0, i)) - eval(tok.substr(i+1, tok.length()-i-1));
        }
    }

    for (int i = 0; i < tok.length(); i++)
    {
        if (tok[i] == '*')
        {
            //cout << tok.substr(0, i) + " * " +  tok.substr(i+1, tok.length()-i-1) << " == " << eval(tok.substr(0, i)) * eval(tok.substr(i+1, tok.length()-i-1)) << endl;
            return eval(tok.substr(0, i)) * eval(tok.substr(i+1, tok.length()-i-1));
        } else if (tok[i] == '/')
        {
            //cout << tok.substr(0, i) + " / " +  tok.substr(i+1, tok.length()-i-1) << " == " << eval(tok.substr(0, i)) / eval(tok.substr(i+1, tok.length()-i-1)) << endl;
            return eval(tok.substr(0, i)) / eval(tok.substr(i+1, tok.length()-i-1));
        }
    }

    //cout << stod(tok.c_str()) << endl;
    const char * zb= tok.c_str();
    return std::atof(zb); // Return the value...
}
void newvar(string varname,string value) {
    strings[varname]=value;
}
string getvar(string f1i) {
    auto iter = strings.begin();
            while (iter != strings.end()) {
        if (f1i==iter->first) {
            return iter->second;
            break;
        }
        ++iter;
    }

    auto iteri = ints.begin();
            while (iteri != ints.end()) {
        if (f1i==iteri->first) {
            return std::__cxx11::to_string(iteri->second);
            break;
        }
        ++iteri;
    }

    auto iterf = floats.begin();
            while (iterf != floats.end()) {
        if (f1i==iterf->first) {
            return std::__cxx11::to_string(iterf->second);
            break;
        }
        ++iterf;
    }
    return "";
}
void newint(string varname,int value) {
    ints[varname]=value;
}
void newfloat(string varname,float value) {
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
    string eval2 = "?";
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
            cout << f6i;
            cout <<endl;
		}
		else if (f3==intd) {
            newint(lex[2],stoi(lex[4])); 
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
            newfloat(lex[2],stof(lex[4])); 
        }
        else if (f1==dollr) {
            cout << getvar(f1i);
            cout <<endl;
;        }
        else if (f1==eval2) {
            cout << eval(f1i);
        }
    }
vector<string> split(const string& str, const char& delim) 
{
    stringstream ss(str);
    string token;
    vector<string> tokens;
    while (getline(ss, token, delim)) 
    {
        tokens.push_back(token);
    }
    return tokens;
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
std::ifstream ifs(e2[1]);

  std::string content( (std::istreambuf_iterator<char>(ifs) ),

    (std::istreambuf_iterator<char>() ) );
    content.erase(std::remove(content.begin(), content.end(), '\n'),
            content.end());

    char delim = ';';
    vector<string> tokens = split(content, delim);
    for (string token : tokens) 
    {
        parse(token);
    }
}
}