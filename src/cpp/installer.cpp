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
#if __linux__ || __APPLE__ || __ANDROID__
     bool linux=true;
     bool windows,freebsd=false;
#endif
#if _WIN32
    bool windows=true;
    bool linux,freebsd=false;
#endif
#if __FreeBSD__
    bool freebsd=true;
    bool linux,windows=false;
#endif
// #
//     cout << "I DONT KNOW YOUR OS";
//     cout << endl << "sorry" <<endl;
//     cout << endl << "Try with BASH? 1 or 0" <<endl;
//     cin >> input;
//     if (input=="1") {
//          inux=true;
//     }
// #endif
using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector; using std::istringstream;
using std::stringstream; using std::ofstream;using std::ifstream;
using json = nlohmann::json;
std::map<string, string> strings;
std::map<string, int> ints;
std::map<string, float> floats;
std::map<string,string> univars;

int main() {
    if (windows) {
        system("del rsmy.exe");
        system("del sprig.exe");
        system("curl https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/install.bat -o reinstall.bat");
        system(".\\reinstall");
        return 0;
    }
    else if (linux) {
        system("rm -Force %rsmypath%/rsmy.exe");
        system("rm -Force %rsmypath%/sprig.exe");
        system("curl https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/install.sh -o reinstall.sh");
        system("chmod +x reinstall.sh");
        system(".\\reinstall"); return 0;
    } 
    else if (freebsd) {
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
    }
    else {
        cout <<"Your OS not recognised";
        return 1;
    } return 1;
}