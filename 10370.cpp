/*--------------------

UVa 10370 - Above Average
mguo.ca

--------------------*/

#include <iostream>
#include <vector>

using namespace std;

int main () {
	int c;
	double n, sum, average, temp;
	cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> n;
		vector<int> v;
		sum = 0;
		for (int j = 0; j < n; j++) {
			cin >> temp;
			sum += temp;
			v.push_back(temp);
		}
		average = sum / n;
		temp = 0;
		for (vector<int>::iterator k = v.begin(); k != v.end(); ++k)
			temp += *k > average;
		printf("%.3f%%\n", temp / n * 100);
	}
	return 0;
}