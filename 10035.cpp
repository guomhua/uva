/*--------------------

UVa 10035 - Primary Arithmetic
mguo.ca

--------------------*/

#include <iostream>

using namespace std;

int main () {
	int a, b, ops, carry;
	while (cin >> a >> b) {
		if (a == 0 && b == 0)
			break;
		ops = 0;
		carry = 0;
		while (a != 0 || b != 0) {
			if ((a % 10 + b % 10 + carry) > 9) {
				ops++;
				carry = 1;
			}
			else carry = 0;
			a /= 10;
			b /= 10;
		}
		if (ops == 0)
			cout << "No carry operation." << endl;
		else cout << ops << " carry " <<  (ops == 1 ? "operation." : "operations.") << endl;
	}
	return 0;
}
