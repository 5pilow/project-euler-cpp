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

#define T 5000
#define L T/2
vector<int> penta = vector<int>();

bool isPenta(long long int n) {
	
	// On vérifie (1 + sqrt(1 + 24n)) / 6 entier
	
	double root = sqrt(1 + 24*n);
	if ((int) root != root) return false;
	
	double res = (1 + root) / 6;
	return (int) res == res;
}

int main() {
	
	penta.push_back(1);
	for (int i = 2; i < T-1; i++) {
		penta.push_back((long long int) i * (3*i - 1) / 2);
	}
	
	int min = -1;
	
	for (int i = 0; i < L; ++i) {
		
		long long int x = penta.at(i);
		
		for (int j = 0; j < i; ++j) {
			
			long long int y = penta.at(j);
			
			if (isPenta(x - y) && isPenta(x + y)) {
				
				cout << "x = " << x << ", y = " << y << endl;
				int d = x - y;
				if (d < min || min == -1) min = d;
			}
		}
	}
	
	cout << "D min : " << min << endl;
	
	return 0;
}

