#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <vector>
#include <algorithm>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector; using std::istringstream;
using std::stringstream;

int main(){
    while (1) {
    string text;
    cout << '>';
    getline (cin, text);
    char space_char = ' ';
    vector<string> words{};

    stringstream sstream(text);
    string word;
    while (std::getline(sstream, word, space_char)){
        word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
        words.push_back(word);
    }
	int x = 0;
	string tokens[10];
    for (const auto &str : words) {
		tokens[x]=str;
		x++;
    }
	string print="print";
	string exita="exit";
		if (tokens[0]==print) {
			cout <<tokens[1]<<endl;
		}
		if (tokens[0]==exita) {
			exit(0);
		}
    }
}