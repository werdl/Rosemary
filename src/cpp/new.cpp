#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <map>
using namespace std; 
int main(){  
string s = "I love to read articles on Favtutor.";
    int x=0;
    string tokens[100];
    // Takes only space separated C++ strings.
    stringstream ss(s);  
    string word;
    while (ss >> word) { // Extract word from the stream.
        cout << word << endl;
        x++;
        tokens[x]=word;
    }
    cout << endl;


}