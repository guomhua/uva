/*--------------------

UVa 10018 - Reverse and Add
mguo.ca

--------------------*/

#include <iostream>

using namespace std;

long reverse(long p) {
	long x = 0;
	while (p != 0) {
		x *= 10;
		x += p % 10;
		p /= 10;
	}
	return x;
}

int main () {
	int n, ite;
	long p;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> p;
		ite = 0;
		while (reverse(p) != p) {
			p = p + reverse(p);
			ite++;
		}
		cout << ite << " " << p << endl;
	}
	return 0;
}