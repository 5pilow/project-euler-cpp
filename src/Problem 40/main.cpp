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
	
	int prod = 1;
	int d = 0;
	int next = 1;
	
	for (int i = 1; i <= 500000; ++i) {
		
		int size = log10(i) + 1;
		
		for (int j = 0; j < size; ++j) {
			
			if (++d == next) {
				
				next = 10 * next;
				prod *= (to_string(i).at(j) - '0');
				
				if (next > 1000000) {
					cout << "Produit : " << prod << endl;
					return 0;
				}
			}
		}
	}
	
	return 0;
}
