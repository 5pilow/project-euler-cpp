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
	
	int count[10];
	int family[10];
	string test;
	
	for (int i = 1000; i < 1000000; i++) {
		
		if (isPrime(i)) {
			
			string s = to_string(i);
			
			for (int j = 0; j < 10; ++j) count[j] = 0;
			
			for (int j = 0; j < s.length(); ++j) {
				count[s[j] - '0']++;
			}
			int max = -1;
			int maxJ = -1;
			for (int j = 0; j < 10; ++j) {
				if (count[j] > max) {
					maxJ = j;
					max = count[j];
				}
			}

			int f = 1;
			family[0] = i;
			for (int r = 0; r < 10; ++r) {
				if (r == 0 && s[0] - '0' == maxJ) continue; // On peut pas mettre un 0 devant
				if (r != maxJ) {
					test = string(s);
					for (int j = 0; j < test.length(); ++j) {
						if (test[j] - '0' == maxJ) test[j] = r + '0';
					}
					int t = std::atoi(test.c_str());
					if (isPrime(t)) {
						family[f++] = t;
					}
				}
			}
			if (f == 8) {
				cout << family[0] << " => ";
				for (int j = 0; j < f; ++j) {
					cout << family[j] << " ";
				}
				cout << "(" << f << ")" << endl;
				break;
			}
		}
	}
	
	
	
	return 0;
}

