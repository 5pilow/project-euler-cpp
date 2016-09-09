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

#define L 9000

inline bool isGood(int* t, int size) {
	
	for (int i = 0; i < size; ++i)
	for (int j = 0; j < size; ++j)
	if (j != i) 
	if (!isPrime(atoi((to_string(t[i]) + to_string(t[j])).c_str()))) return false;
	
	return true;
}

int main() {
	
	vector<int> primes;
	for (int i = 0; i < L; ++i) {
		if (isPrime(i) && i != 2 && i != 5) primes.push_back(i);
	}
	int num = primes.size();
	
	int tab[5];
	int it = 0;
	
	for (int i = 0; i < num; ++i) {
		tab[0] = primes.at(i);
		for (int j = i + 1; j < num; ++j) {
			tab[1] = primes.at(j);
			
			if (isGood(tab, 2))
			
			for (int k = j + 1; k < num; ++k) {
				tab[2] = primes.at(k);
				
				if (isGood(tab, 3))
				
				for (int l = k + 1; l < num; ++l) {
					tab[3] = primes.at(l);
					
					if (isGood(tab, 4))
					
					for (int m = l + 1; m < num; ++m) {
						tab[4] = primes.at(m);
						
						if (isGood(tab, 5)) {
							cout << primes.at(i) << " " << primes.at(j) << " " << primes.at(k) << " " << primes.at(l) << " " << primes.at(m) << endl;
							cout << "Somme : " << tab[0]+tab[1]+tab[2]+tab[3]+tab[4] << endl;
							return 0;
						}
					}
				}
			}
		}
	}
	
	return 0;
}
