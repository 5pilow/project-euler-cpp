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
	
	mpz_t n, p;
	mpz_init(p);
	
	char str[3000];
	
	int max = 0;
	int maxA = 0;
	int maxB = 0;
	string maxS;
	
	for (int a = 1; a <= 100; ++a) {
		
		mpz_init_set_ui(n, a);
		
		for (int b = 1; b <= 100; ++b) {
			
			mpz_pow_ui(p, n, b);
			mpz_get_str(str, 10, p);
			
			int sum = 0;
			int size = strlen(str);
			for (int i = 0; i < size; ++i) {
				sum += str[i] - '0';
			}
			if (sum > max) {
				max = sum;
				maxA = a;
				maxB = b;
				maxS = string(str);
			}
		}
	}
	
	cout << "Max : " << max << ", avec " << maxA << "^" << maxB << " = " << maxS << endl;
	
	return 0;
}
