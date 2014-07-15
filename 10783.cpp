/*--------------------

UVa 10783 - Odd Sum
mguo.ca

--------------------*/

#include <iostream>

using namespace std;

/* 
 * 		a+2*0 a+2*1 a+2*2 ... a+2*(b-a)/2
 * =	a((b-a)/2 + 1) + ((b-a)/2+1)(b-a)/2
 * (let c = (b-a)/2)
 * =	a(c+1)+(c+1)c
 * =	(c+1)(a+c)
 */

int main () {
	int n, a, b, c;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a >> b;
		a += !(a%2);
		b -= !(b%2);
		// comptue c
		c = b - a;
		c /= 2;
		// result
		a += c;
		c += 1;
		c *= a;
		cout << "Case " << i << ": " << c << endl;
	}
	return 0;
}