/*--------------------

UVa 494 - Kindergarten Counting Game
mguo.ca

--------------------*/

#include <iostream>
#include <string>

using namespace std;

int main () {
	string input;
	int count = 0;
	char ch;
	bool word = false;
	while (getline(cin, input)) {
		for (int i = 0; input[i] != '\0'; i++) {
			ch = input[i];
			if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
				if (!word)
					word = true;
			}
			else if (word) {
				count++;
				word = false;
			}
		}
		cout << count << endl;
		count = 0;
	}
	return 0;
}
