/*--------------------

UVa 272 - TeX Quotes
mguo.ca

--------------------*/

#include <iostream>
#include <string>

using namespace std;

int main () {
	string input;
	bool first_of_pair = true;
	while (getline(cin, input)) {
		size_t found = input.find("\"");
		while (found != string::npos) {
			input.replace(found, 1, first_of_pair ? "``" : "''");
			first_of_pair = !first_of_pair;
			found = input.find("\"");
		}
		cout << input << endl;
	}
	return 0;
}
