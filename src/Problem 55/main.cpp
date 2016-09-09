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
	
	string s;
	int count = 0;
	
	mpz_t n;
	mpz_t tot;
	mpz_init(n);
	mpz_init(tot);
	
	char str[1000];
	
	for (int i = 1; i <= 10000; ++i) {
		
		int it = 0;
		bool lychrel = true;
		mpz_init_set_ui(n, i);
		
		while (it++ <= 50) {
			
			mpz_get_str(str, 10, n);
			s = string(str);
			mpz_init_set_str(tot, string(s.rbegin(), s.rend()).c_str(), 10);
			mpz_add(tot, tot, n);
			mpz_get_str(str, 10, tot);
			s = string(str);
			if (s == string(s.rbegin(), s.rend())) {
				lychrel = false; 
				break;
			}
			mpz_set(n, tot);
		}
		if (lychrel) count++;
	}
	
	cout << count << " nombres de Lychrel en dessous de 10000" << endl;
	
	return 0;
}
