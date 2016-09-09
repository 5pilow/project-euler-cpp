#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <iostream>
#include <gmp.h>

using namespace std;

int main() {
	
	mpz_t n;
	mpz_init(n);
	mpz_fac_ui(n, 100);
	
	char str[10000];
	mpz_get_str(str, 10, n);
	
	std::string s(str);
	
	int sum = 0;
	for (int i = 0; i < s.length(); ++i) {
		sum += s.at(i) - '0';
	}
	
	std::cout << "Taille : " << s.length() << std::endl;
	
	std::cout << "100! = " << s << std::endl;
	
	std::cout << sum << std::endl;
	
	return 0;
}
