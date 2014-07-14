/*--------------------

UVa 10300 - Ecological Premium
mguo.ca

--------------------*/

#include <iostream>

using namespace std;

int main () {
	/*
	 * s: size of farmyard
	 * a: # of animals
	 * e: environmental-friendliness
	 * p: premium
	 *
	 * p = s / a * e * a = s * e
	 */
	int n, f, s, a, e, p;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> f;
		p = 0;
		for (int j = 0; j < f; j++) {
			cin >> s >> a >> e;
			p += s * e;
		}
		cout << p << endl;
	}
	return 0;
}
