/*--------------------

UVa 136 - Ugly Numbers
mguo.ca

--------------------*/

#include <iostream>
// #include <unordered_set>

using namespace std;

/*

Algorithm:
- incremental check of integers starting from 1,
  until 1500 ugly numbers are found.
- modified dynamic programming using set instead of array

int primes[3] = {2,3,5};
unordered_set<int> uglies;

bool is_ugly (int n) {
	if (uglies.find(n) != uglies.end())
		return true;
	for (int i = 0; i < 3; i++) {
		if (n % primes[i] == 0) {
			if (uglies.find(n/primes[i]) != uglies.end()) {
				uglies.insert(n);
				return true;
			}
			else
				return false;
		}
	}
	return false;
}

int main () {
	uglies.insert({2,3,5});
	int n = 1500;
	int i = 1;
	int count = 1;
	while (count < n) {
		if (is_ugly(++i)) {
			count++;
		}
	}
	cout << "The " << n << "'th ugly number is " << i << ".";
	return 0;
}

*/

int main () {
	cout << "The 1500'th ugly number is 859963392." << endl;
	return 0;
}