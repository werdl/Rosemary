#include <iostream>
#include <string>
using namespace std;

int main()
{
	string test = "hello;world";
	int testlength=test.length();
	string token0;
	string token1;
	string token2;
	string token3;
	int x = 0;
	string lf = ";";
	while (test[x]!=lf) {
		if (x=0) {
			string token0=token0+test[x];
		}
		if (x=1) {
			string token1=token1+test[x];
		}
		if (x=2) {
			string token2=token2+test[x];
		}
		if (x=3) {
			string token3=token3+test[x];
		}
		x++;
	}
	
	cout << token0;
	cout << token1;
	
}