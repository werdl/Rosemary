#include <windows.h>
#include <string>
#include <limits.h>
#include <iostream>

using namespace std;
int main()
{
    // var declarations
    string cwd = ">";
    bool shell = true;
    string cmd = "exit";
    string command;
    while (shell==true) {
        cout << cwd;
        cin >> command;
        if (command == cmd) {
            shell=false;
        }
    }

}