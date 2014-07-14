/*--------------------

UVa 299 - Train Swapping
mguo.ca

--------------------*/

#include <iostream>
#include <vector>

using namespace std;

void swap (int* a, int* b, int &ops) {
	int temp = *a;
	*a = *b;
	*b = temp;
	ops++;
}

int main () {
	int n, l, c, ops;
	bool sorted = false;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> l;
		vector<int> v;
		for (int j = 0; j < l; j++) {
			cin >> c;
			v.push_back(c);
		}
		ops = 0;
		sorted = false;
		// Count # of bubble sort operations.
		while (!sorted) {
			sorted = true;
			for (int k = 0; k < l - 1; k++) {
				if (v[k] > v[k+1]) {
					swap(&v[k], &v[k+1], ops);
					sorted = false;
				}
			}
		}
		cout << "Optimal train swapping takes " << ops << " swaps." << endl;
	}
	return 0;
}
