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
	
	string si, sj;
	
	int deno = 1;
	int nume = 1;
	
	for (int i = 10; i <= 99; ++i) {
		
		si = to_string(i);
		float c = si.at(0) - '0';
		float d = si.at(1) - '0';
		
		for (int j = 10; j < i; ++j) {
			
			float frac = (float)j/(float)i;
			
			sj = to_string(j);
			float a = sj.at(0) - '0';
			float b = sj.at(1) - '0';
			
			bool good = false;
			if (a == c && a != 0 && d != 0 && b/d == frac) {
				good = true;
				nume *= b;
				deno *= d;
			}
			if (a == d && a != 0 && c != 0 && b/c == frac) {
				good = true;
				nume *= b;
				deno *= c;
			}
			if (b == c && b != 0 && d != 0 && a/d == frac) {
				good = true;
				nume *= a;
				deno *= d;
			}
			if (b == d && b != 0 && c != 0 && a/c == frac) {
				good = true;
				nume *= a;
				deno *= c;
			}
			
			if (good)
				cout << a << b << " / " << c << d << endl;
		}
	}
	
	cout << "-------" << endl;
	cout << nume << " / " << deno << endl;
	
	int div;
	int max = 0;
	
	for (div = 1; div <= nume; ++div) {
		if (nume % div == 0 && deno % div == 0) 
			max = div;
	}
	cout << "simp. par " << max << endl;
	 
	cout << (nume/max) << " / " << (deno/max) << endl;
	
	return 0;
}
