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

bool isPenta(long long int n) {
	
	// On vérifie (1 + sqrt(1 + 24n)) / 6 entier
	
	double root = sqrt(1 + 24*n);
	if ((int) root != root) return false;
	
	double res = (1 + root) / 6;
	return (int) res == res;
}

bool isTriangle(long long int n) {
	
	// On vérifie (sqrt(1 + 8n) - 1) / 2 entier
	
	double root = sqrt(1 + 8*n);
	if ((int) root != root) return false;
	
	double res = (root - 1) / 2;
	return (int) res == res;
}

bool isHexa(long long int n) {
	
	// On vérifie (1 + sqrt(1 + 8p)) / 4 entier
	
	double root = sqrt(1 + 8*n);
	if ((int) root != root) return false;
	
	double res = (root + 1) / 4;
	return (int) res == res;
}

int main() {
	
	for (long long int i = 2; i < 100000; i++) {
		
		long long int x = i * (i + 1) / 2;
		
		if (isPenta(x) && isHexa(x)) cout << x << endl;
	}
	
	return 0;
}

