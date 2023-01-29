#include <windows.h>
#include <string>
#include <limits.h>
#include <iostream>
using namespace std;
bool isfloat(const std::string& str) { char* ptr; strtof(str.c_str(), &ptr); return (*ptr) == '\0'; }
int main() {
    cout << isfloat("3");
}