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

#define LIM 200

int main() {
	
	int n = 0;
	int sum = 0;
	
	for (int i = 0; i <= LIM; i += 200) { // Pièce de 2€
	
		sum = i;
		if (sum == LIM) {n++; break;}
		
		for (int j = 0; j <= LIM; j += 100) { // Pièce de 1€
		
			sum = i + j;
			if (sum == LIM) {n++; break;}
			if (sum > LIM) break;
			
			for (int k = 0; k <= LIM; k += 50) { // Pièce de 50c
				
				sum = i + j + k;
				if (sum == LIM) {n++; break;}
				if (sum > LIM) break;
				
				for (int l = 0; l <= LIM; l += 20) { // Pièce de 20c
					
					sum = i + j + k + l;
					if (sum == LIM) {n++; break;}
					if (sum > LIM) break;
			
					for (int m = 0; m <= LIM; m += 10) { // Pièce de 10c
						
						sum = i + j + k + l + m;
						if (sum == LIM) {n++; break;}
						if (sum > LIM) break;
			
						for (int q = 0; q <= LIM; q += 5) { // Pièce de 5c
							
							sum = i + j + k + l + m + q;
							if (sum == LIM) {n++; break;}
							if (sum > LIM) break;
							
							for (int o = 0; o <= LIM; o += 2) { // Pièce de 2c
								
								sum = i + j + k + l + m + q + o;
								if (sum == LIM) {n++; break;}
								if (sum > LIM) break;
								
								for (int p = 0; p <= LIM; p += 1) { // Pièce de 1c
									
									sum = i + j + k + l + m + q + o + p;
									if (sum == LIM) {n++; break;}
									if (sum > LIM) break;
								}
							}
						}
					}
				}
			}
		}
	}
	
	
	cout << "Total : " << n << endl;
	
	return 0;
}
