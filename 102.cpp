/*--------------------

UVa 102 - Ecological Bin Packing
mguo.ca

--------------------*/

#include <iostream>
#include <string>

using namespace std;

int main () {
	int b1, g1, c1, b2, g2, c2, b3, g3, c3;
	int sum;
	int gbc, gcb, bcg, bgc, cgb, cbg;
	int* max;
	while(cin >> b1 >> g1 >> c1 >> b2 >> g2 >> c2 >> b3 >> g3 >> c3) {
		// Find the maximum combination of cans to stay in-place, 
		// this implies minimum movement of other cans.
		gbc = g1 + b2 + c3;
		max = &gbc;
		gcb = g1 + c2 + b3;
		max = gcb > *max ? &gcb : max;
		bcg = b1 + c2 + g3;
		max = bcg > *max ? &bcg : max;
		bgc = b1 + g2 + c3;
		max = bgc > *max ? &bgc : max;
		cbg = c1 + b2 + g3;
		max = cbg > *max ? &cbg : max;
		cgb = c1 + g2 + b3;
		max = cgb > *max ? &cgb : max;

		sum = b1 + b2 + b3 + g1 + g2 + g3 + c1 + c2 + c3;
		
		// Print combination (order matters) and compute minimum movements.
		if (*max == bcg)
			cout << "BCG " << sum - bcg << endl;
		else if (*max == bgc)
			cout << "BGC " << sum - bgc << endl;
		else if (*max == cbg)
			cout << "CBG " << sum - cbg << endl;
		else if (*max == cgb)
			cout << "CGB " << sum - cgb << endl;
		else if (*max == gbc)
			cout << "GBC " << sum - gbc << endl;
		else if (*max == gcb)
			cout << "GCB " << sum - gcb << endl;
	}
	return 0;
}
