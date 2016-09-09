#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <iostream>
#include <gmp.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <bitset>
#include <climits>

using namespace std;


int main() {
	
	int max = 0;
	int maxP = 0;
	
	for (int p = 1; p <= 1000; ++p) {
		
		int sol = 0;
		
		for (int a = 1; a < p; ++a) {
			
			for (int b = 1; b < a; ++b) {
				
				if (a + b > p) break;
				
				int c = p - a - b;
				
				if (a*a == b*c + c*c) sol++;
			}
		}
		
		if (sol > max) {
			max = sol;
			maxP = p;
		}
	}
	
	cout << "Solutions max : " << max << endl;
	cout << "Avec p = " << maxP << endl;
	
	
	return 0;
}
