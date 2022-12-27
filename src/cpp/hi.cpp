#include <windows.h>
#include <string>
#include <limits.h>
#include <iostream>

using namespace std;

string getCurrentDir() {
    char buff[MAX_PATH];
    GetModuleFileName( NULL, buff, MAX_PATH );
    string::size_type position = string( buff ).find_last_of( "\\/" );
    return string( buff ).substr( 0, position);
}
int main()
{
    // var declarations
    string cwd = getCurrentDir() + '>';
    bool shell = true;
    string command;
    while (shell==true) {
        cout << cwd;
        cin >> command;
        cout << command;
        string exitcmd = "exit";
        if (command == exitcmd) {
            bool shell = false;
        }
    }

}