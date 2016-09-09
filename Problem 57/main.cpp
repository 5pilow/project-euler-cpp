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
	
	int count = 0;
	int it = 0;
	
	mpz_t a, b, c;
	mpz_init_set_ui(a, 1);
	mpz_init_set_ui(b, 1);
	mpz_init(c);
	
	char sa[1000];
	char sb[1000];
	
	while (it++ < 1000) {
		
		mpz_add(c, a, b);
		mpz_mul_ui(b, b, 2);
		mpz_add(b, b, a);
		mpz_set(a, b);
		mpz_set(b, c);
		
		mpz_get_str(sa, 10, a);
		mpz_get_str(sb, 10, b);
		
		if (strlen(sa) > strlen(sb)) count++;
	}
	
	cout << "Nombre de cas a/b avec plus de chiffres dans a que dans b : " << count << endl;
	cout << "Dernière fraction après 1000 itérations : " << sa << endl << "/" << endl << sb << endl;
	cout << "taille : " << strlen(sa) << endl;
	
	return 0;
}
