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

#define LIM 10000

int main() {
	
	int i, j, n, k, m, digits;
	string si, sj, sn, st;
	bool good;
	
	vector<int> found;
	
	for (i = 1; i < LIM; ++i) {
		
		si = to_string(i);
		
		for (j = i; j < LIM/i; ++j) {
			
			sj = to_string(j);
			
			n = i*j;
			
			bool exists = false;
			for (int e = 0; e < found.size(); ++e) {
				if (found.at(e) == n) {
					exists = true; break;
				}
			}
			
			if (exists) continue;
			
			sn = to_string(n);
			
			if (si.length() + sj.length() + sn.length() == 9) { 
				
				st = si + sj + sn;
				
				good = true;
				
				for (k = 1; k <= 9; ++k) {
					digits = 0;
					for (m = 0; m < st.length(); ++m) {
						if (st.at(m) - '0' == k) digits++;
					}
					if (digits != 1) {
						good = false;
						break;
					}
				}
				
				if (good) {
					cout << i << " × " << j << " = " << n << endl;
					found.push_back(n);
				}
			}
		}
	}
	
	int sum = 0;
	for (int i = 0; i < found.size(); ++i) {
		sum += found.at(i);
	}
	
	
	cout << "Total : " << found.size() << endl;
	cout << "Somme : " << sum << endl;
	
	return 0;
}
