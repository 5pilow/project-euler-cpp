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


int main() {
	
	mpz_t n1;
	mpz_t n2;
	mpz_t tmp;
	
	mpz_init(tmp);
	mpz_init_set_str(n1, "1", 0);
	mpz_init_set_str(n2, "1", 0);
	
	char str[1000];
	int t = 2;
	
	while (strlen(str) < 1000) {
		
		mpz_set(tmp, n1);
		mpz_add(n1, n1, n2);
		mpz_set(n2, tmp);
		
		mpz_get_str(str, 10, n1);
		t++;
	}
	
	cout << str << endl;
	cout << t << endl;
	
	return 0;
}
