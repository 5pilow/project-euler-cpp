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
	
	int primes = 0;
	int numbers = 1;
	
	for (int i = 1; i <= 100000; ++i) {
		
		long long int x = 2*i + 1;
		if (isPrime(x*x)) primes++;
		if (isPrime(x*x - 6*i)) primes++;
		if (isPrime(x*x - 4*i)) primes++;
		if (isPrime(x*x - 2*i)) primes++;
		
		numbers += 4;
		float ratio = (float) primes / numbers;
		
		if (ratio < 0.10f) {
			cout << primes << "/" << numbers << ", size : " << (i * 2 + 1) << endl;
			break;
		}
	}
	
	return 0;
}
