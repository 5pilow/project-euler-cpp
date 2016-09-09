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
	
	vector<int> primes;
	for (int i = 0; i < 1000000; i++) {
		if (isPrime(i)) primes.push_back(i);
	}
	
	int max = 2;
	int number;
	
	int N = primes.size();
	
	for (int i = 0; i < N - max; ++i) {
		
		int size = max;
		int sum;
		do {
			sum = 0;
			for (int j = 0; j < size; ++j)
				sum += primes.at(i + j);
			
			if (isPrime(sum) && size > max) {
				max = size;
				number = sum;
			}
			size++;
		} while (sum < 1000000 && i + size < N);
	}
	
	cout << "Taille max : " << max << endl;
	cout << "avec le nombre : " << number << endl;
	
	return 0;
}

