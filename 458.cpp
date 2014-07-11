/*--------------------

UVa 458 - The Decoder
mguo.ca

--------------------*/

#include <iostream>
#include <string>

using namespace std;

int main () {
	string s;
	while(getline(cin, s)) {
		for (char& c : s)
			c-=7;
		cout << s << endl;
	}
	return 0;
}
