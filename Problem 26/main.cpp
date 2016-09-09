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

#define PRECISION 2000

int getMaxRepetition(char* s, int d) {
	
	int len = strlen(s);
	
	if (len == PRECISION) { // Nombre qui boucle à l'infini

		for (int p = 1; p <= 1000; ++p) {
			bool ok = true;
			for (int i = 20; i < 20 + p; ++i) {
				
				if (s[i] != s[i + p]) {
					ok = false;
					break;
				}
			}
			if (ok) {
				return p;
			}
		}
	}
	return 0;
}

int main() {
	
	int max = 0;
	int maxD = 0;
	
	mpf_set_default_prec(4 * PRECISION);
	
	mpf_t res;
	mpf_t nb;
	
	mpf_init(res);
	mpf_init(nb);
	
	mp_exp_t expprt;
	
	char* str;
	string final;
	
	for (int i = 1; i < 1000; ++i) {
		
		mpf_set_ui(nb, i);
		mpf_ui_div(res, 1, nb);
		
		str = mpf_get_str(NULL, &expprt, 10, PRECISION, res);
		
		int rep = getMaxRepetition(str, i);
		if (rep > max) {
			max = rep;
			maxD = i;
			final = str;
		}
	}
	
	cout << "------------------" << endl;
	cout << "nombre : " << final << endl;
	cout << "répétition de " << max << " de long" << endl;
	cout << "avec la fraction 1/" << maxD << endl;
	
	return 0;
}
