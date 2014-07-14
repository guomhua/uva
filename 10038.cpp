/*--------------------

UVa 10038 - Jolly Jumpers
mguo.ca

--------------------*/

#include <iostream>
#include <string>
#include <sstream>
#include <set>

using namespace std;

int main () {
	string input;
	stringstream sstream;
	int prev, next, size;
	bool jolly = true;
	while (getline(cin, input)) {
		sstream.clear();
		sstream.str(input);
		set<int> diffs;
		sstream >> size;
		if (size > 1) {
			sstream >> prev;
			while (sstream >> next) {
				diffs.insert(abs(prev - next));
				prev = next;
			}
			for (int i = 1; i < size; i++) {
				if (diffs.find(i) == diffs.end()) {
					jolly = false;
					break;
				}
			}
		}
		cout << (jolly ? "Jolly" : "Not jolly") << endl;
		jolly = true;
	}
	return 0;
}
