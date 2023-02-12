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
#include <fstream>
#include "json.hpp"

using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector; using std::istringstream;
using std::stringstream; using std::ofstream;using std::ifstream;
using json = nlohmann::json;
std::map<string, string> strings;
std::map<string, int> ints;
std::map<string, float> floats;
std::map<string,string> univars;

bool upgrade() {
    #if _WIN32
        system("cd %rsmypath%");
        system("del rsmy.exe");
        system("del sprig.exe");
        system("curl https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/install.bat -o reinstall.bat");
        system(".\\reinstall");
        return 0;
    #endif
    #if __linux__ || __APPLE__ || __ANDROID__
        system("rm -Force %rsmypath%/rsmy.exe");
        system("rm -Force %rsmypath%/sprig.exe");
        system("curl https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/install.sh -o reinstall.sh");
        system("chmod +x reinstall.sh");
        system(".\\reinstall"); return 0;
   #endif
    #if __FreeBSD__
        cout << "RESPECT TO YOU USER, for installing rsmy on freebsd. I didn't code the full works for freebsd :( sorry updates have to be manual (i dont have bsd partition)";
        cout << endl << "If you type 1, update will attempt with BASH" <<endl;
        string input;
        cin >> input;
        if (input=="1") {
            system("rm -Force %rsmypath%/rsmy.exe");
            system("rm -Force %rsmypath%/sprig.exe");
            system("https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/install.sh -o reinstall.sh");
            system("chmod +x reinstall.sh");
            system(".\\reinstall"); return 0;
        }
    #endif
 return 1;
}
void loga(string call,bool success,string debug,string message) { // Log function takes 4 arguments, call (statement), success (bool saying whether or not the call was valid), debug (debugging info) and message(stuff form the compiler)
    // connect to file
    string filename("rsmy.log");
    std::fstream file_out;

    file_out.open(filename, std::ios_base::app);
    file_out << "Call was \""<<call << "\" Success: "<<success <<" Debug info: \""<<debug<<"\" Any messages: \""<<message <<"\""<< endl;
}
void thrftl(string debug,string message) {
    cout << "Fatal runtime error occured - " << message;
    loga("null",0,"THREW NON FATAL ERROR",debug);
}
void nonftl(string debug,string message) {
    cout << "Non-Fatal runtime error occured - " << message;
    loga("null",0,"THREW FATAL ERROR",debug);
}
void newuni(string type,string name,string contents) {
    ofstream MyFile(name+".rsmyuni");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  MyFile.close();
}

string getuni(string name) {
    string myText;

// Read from the text file
ifstream MyReadFile(name+".rsmyuni");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
}

// Close the file
MyReadFile.close();

// Close the file
return ";";
}
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
string checkint(string f1i) { //check if int var of passed arg exists
    auto iteri = ints.begin();
            while (iteri != ints.end()) {
        if (f1i==iteri->first) {
            return std::__cxx11::to_string(iteri->second);
            break;
        }
        ++iteri;
    }
    return "";
}
string checkfloat(string f1i) { //check if float var of passed arg exists
    auto iterf = floats.begin();
            while (iterf != floats.end()) {
        if (f1i==iterf->first) {
            return std::__cxx11::to_string(iterf->second);
            break;
        } else {
            return "";
        }
        ++iterf;
    }
    return "";
}
string checkstring(string f1i) { //check if string var of passed arg exists
    auto iter = strings.begin();
            while (iter != strings.end()) {
        if (f1i==iter->first) {
            return iter->second;
            break;
        } else {
            return "";
        }
        ++iter;
    }
    return "";
}
string getvar(string f1i) { // Return variable based on the name given
    auto iter = strings.begin();
            while (iter != strings.end()) {
        if (f1i==iter->first) {
            return iter->second;
            break;
        } else {
            return "";
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
bool isfloat(const std::string& str) { 
    char* ptr; 
    strtof(str.c_str(), &ptr); 
    return (*ptr) == '\0'; 
}
void newint(string varname,int value) {
    ints[varname]=value;
}
void nothing() {
    
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
    string dollr2 = "&";
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
/*
The above strings are the statement given, seperated into little chunks.
f1 is the first char
then 
f1i is the 2nd - last chars
*/
    if (t==0) {}
    if (t>1) {  f1=tokens.substr(0,1);
           f1i=tokens.substr(1,tokens.length());}
    if (t>3) {     f3=tokens.substr(0,3);}
    if (t>4) {      f4=tokens.substr(0,4);
          f4i=tokens.substr(4,tokens.length());}
    if (t>5) {     f5=tokens.substr(0,5); f5i=tokens.substr(5,tokens.length());}
    if (t>6) {     f6=tokens.substr(0,6); f6i=tokens.substr(6,tokens.length());}
    int xz = tokens.length();

		if (f5==print) {
            loga(tokens,1,"CALLED PRINT FUNC","null");
            cout << f6i;
            cout <<endl;
		}
		else if (f3==intd && checkfloat(lex[2])=="" && checkstring(lex[2])=="") {
            if (checkfloat(lex[2])!="" || checkstring(lex[2])!="") {
                nonftl("incorrect type","This variable already exists as another type. Try using a different name.");
            }
            string zed=lex[4];
            const char *hello=zed.data();
            int notint;
            int ints = 0;
            bool containsoper;
            for (int i = 0; i < strlen(hello); i++) {
                if(isdigit(hello[i])) {
                    nothing();
                    notint=0;
                    ints++;
                }
                else if (hello[i]=='+'|| hello[i]=='-'|| hello[i]=='/'|| hello[i]=='*') {
                    containsoper=true;
                }
                else {
                    notint=1;
                }
                }
                if (notint!=1 && ints!=0) {
                    newint(lex[2],stoi(lex[4])); 
                    loga(tokens,1,"CALLED INT SUCCESS, DECLARED "+lex[4],"SUCCESS");
                } else {
                    string debugmsg=lex[4]+" is not an integer";
                    nonftl(debugmsg,"ValueError");
                    loga(tokens,0,"CALLED INT FUNC","null");
                    return;
            }
        }
        else if (f6==stringd && getvar(lex[2])=="") {
            string lex4=lex[4];
            for (unsigned int i = 0; i < strlen(chars); ++i)

{

lex4.erase (std::remove(lex4.begin(), lex4.end(), chars[i]), lex4.end());

}
            newvar(lex[2],lex4); 
            
        }
        else if (f5==floatd && eval(lex[4])==1) {
            loga(tokens,1,"CALLED FLOAT FUNC","null");
            newfloat(lex[2],eval(lex[4])); 
        }
        else if (f1==dollr) {
            loga(tokens,1,"CALLED VAR "+f1i,"null");
            cout << getvar(f1i);
            cout <<endl;
;        }
        else if (lex[1]=="quit") {
            exit(0);
        }
        else if (lex[1]=="uni") {
            newuni("",lex[2],lex[4]);
        }
        else if (lex[1]==dollr2) {
            getuni(f1i);
        }
    int place=0;
        while(1) {
            if (place>tokens.length()) {
                break;
            }
            if (tokens[place]=='?') {
                string tokensplace=tokens.substr(place,tokens.length());
                string likelyeval=tokens.substr(place+1,tokens.length());
                string f1iclone=f1i;
                string to_eval;
                char f1iclonechar;
                for (int spot=1;f1iclonechar!=')';spot++) {
                f1iclonechar=likelyeval[spot];
                if (f1iclonechar!=')'){
                    to_eval=to_eval+f1iclonechar;
                }
            }
            try {
                cout << eval(to_eval)<<endl;
                string error="Evaluation Error!";
                throw to_eval;
                string z=to_eval;
            } catch(string to_eval) {
                nonftl("Evaluation Error",to_eval);
                return;
            }

            }
            place++;
        } 
        // else if (f1==eval2) {
        //     string f1iclone=f1i;
        //     string to_eval;
        //     char f1iclonechar;
        //     for (int spot=1;f1iclonechar!=')';spot++) {
        //         f1iclonechar=f1iclone[spot];
        //         if (f1iclonechar!=')'){
        //             to_eval=to_eval+f1iclonechar;
        //         }
        //     }
        //     cout << eval(to_eval)<<endl;
        // }
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
    string update="--update";
    string checkfor="";
    if (e2[1]==update) {
        upgrade();
    }
    if (e2[1]=="") {
    while (1) {
    cout << "$~>";
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