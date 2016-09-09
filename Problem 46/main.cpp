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

bool isPrime(long long int n) {
	
	long long int root = sqrt(n);
	if (n == 2) return true;
	if (n == 0 || n == 1 || n % 2 == 0) return false;
	
	for (long long int i = 3; i <= root; i += 2)
		if (n % i == 0) return false;
	return true;
}

int main() {
	
	vector<int> primes = vector<int>();
	for (int i = 0; i < 10000; i++) {
		if (isPrime(i)) primes.push_back(i);
	}
	
	int P = primes.size();
	
	for (int i = 3; i < 10000; i += 2) {
		
		// faut trouver un prime plus petit
		bool good = false;
		
		for (int j = 0; j < P; j++) {
			int p = primes.at(j);
			if (p < i) {
				
				// i = p + 2 * k^2, faut trouver un k
				int diff = (i - p) / 2;
				// diff carré parfait ?
				int root = sqrt(diff);
				if (root * root == diff) {
					cout << i << " = " << p << " + 2×" << root << "²" << endl;
					good = true;
					break;
				}
			}
		} 
		if (!good && !isPrime(i)) {
			cout << "Pas bon : " << i << endl; break;
		}
	}
	
	return 0;
}

