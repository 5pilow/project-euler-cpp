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
	
	mpz_t sum;
	mpz_init_set_ui(sum, 0);
	
	mpz_t v;
	
	for (int i = 1; i <= 1000; ++i) {
		
		mpz_init_set_ui(v, i);
		mpz_pow_ui(v, v, i);
		mpz_add(sum, sum, v);
	}
	
	char str[10000];
	mpz_get_str(str, 10, sum);
	
	cout << "Somme : " << str << endl;
	cout << "Nombre à " << strlen(str) << " chiffres" << endl;
	cout << "10 derniers chiffres : " << string(str).substr(strlen(str) - 10, 10) << endl;
	
	return 0;
}

