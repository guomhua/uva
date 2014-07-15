/*--------------------

UVa 10082 - WERTYU
mguo.ca

--------------------*/

#include <iostream>
#include <string>

using namespace std;

int main () {
	string input;
	string list = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	while (getline(cin, input)) {
		for (int i = 0; i < input.length(); ++i)
			cout << (input[i] == ' ' ? ' ' : list[list.find(input[i]) - 1]);
		cout << endl;
	}
	return 0;
}