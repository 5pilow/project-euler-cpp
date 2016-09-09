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

vector<int> primes = vector<int>();

int numDiv(int n) {
	int num = 0;
	
	int i = 0;
	int p;
	do {
		p = primes.at(i);
		if (n % p == 0) {
			num++;
			do {
				n /= p;
			} while (n % p == 0);
		}
		i++;
	} while (p < n);
	
	return num;
}

int main() {
	
	for (int i = 0; i < 500000; i++) {
		if (isPrime(i)) primes.push_back(i);
	}
	
	for (int i = 1; i < 1000000; i ++) {
		
		if (numDiv(i) != 4) continue;
		if (numDiv(i + 1) != 4) {
			i++; 
			continue;
		}
		if (numDiv(i + 2) != 4) {
			i += 2; 
			continue;
		}
		if (numDiv(i + 3) != 4) {
			i += 3; 
			continue;
		}
		
		cout << i << ", " << (i + 1) << ", " << (i + 2) << ", " << (i + 3) << endl;
		break;
	}
	
	return 0;
}

