/*--------------------

UVa 591 - Box of Bricks
mguo.ca

--------------------*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main () {
	int n, h, temp, move;
	int counter = 0;
	while (cin >> n) {
		if (n == 0)
			break;
		counter++;
		temp = move = 0;
		vector<int> v;
		for (int i = 0; i < n; i++) {
			cin >> h;
			temp += h;
			v.push_back(h);
		}
		temp /= n;
		// Get moves
		for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
			move += abs(temp - *i);
		move /= 2;
		cout << "Set #" << counter << endl 
			 << "The minimum number of moves is " << move << "." << endl << endl;
	}
	return 0;
}