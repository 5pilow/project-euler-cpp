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
	
	mpz_t factn;
	mpz_t x;
	mpz_t y;
	mpz_init(factn);
	mpz_init(x);
	mpz_init(y);
	
	char str[10000];
	int num = 0;
	
	for (int n = 1; n <= 100; ++n) {
		
		mpz_fac_ui(factn, n);
		
		for (int r = 1; r <= n; ++r) {
			
			mpz_fac_ui(x, r);
			mpz_fac_ui(y, n - r);
			mpz_mul(x, x, y);
			mpz_div(x, factn, x);
			
			mpz_get_str(str, 10, x);
			
			if (strlen(str) >= 7) {
				num++;
			}
		}
	}
	cout << "Nombre : " << num << endl;
	
	return 0;
}

