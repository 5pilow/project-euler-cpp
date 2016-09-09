#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <iostream>
#include <gmp.h>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

bool isPrime(int n) {
	
	if (n < 0) return false;
	
	int root = sqrt(n);
	
	for (int i = 3; i <= root; ++i)
		if (n % i == 0) return false;
	return true;
}

int numPrimes(int a, int b) {
	
	int n = 0;
	while (isPrime(n*n + a*n + b)) n++;
	return n - 1;
}

int main() {
	
	int max = 0;
	int num;
	int a,b;
	
	int maxA, maxB;
	
	for (a = -999; a < 1000; ++a) {
		for (b = -999; b < 1000; ++b) {
			
			if (isPrime(b)) { // b doit etre premier !
			
				num = numPrimes(a, b);
				if (num > max) {
					max = num;
					maxA = a;
					maxB = b;
				}
			}
		}
	}
	
	cout << "Nombre de premiers : " << max << endl;
	cout << "a : " << maxA << endl;
	cout << "b : " << maxB << endl;
	cout << "ab : " << maxA * maxB << endl;
	
	return 0;
}
