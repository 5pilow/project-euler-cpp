#include <iostream>
#include <math.h>
#include <string>


bool isPyth(int a, int b, int c) {
	return a*a + b*b == c*c;
}

int main() {
	
	int c;
	
	for (int a = 1; a <= 1000; ++a) {
		for (int b = a + 1; b <= 1000; ++b) {
			
			c = 1000 - a - b;
			if (isPyth(a, b, c)) {
				
				std::cout << a << "² + " << b << "² = " << c << "²" << std::endl;
				std::cout << "Produit abc : " << (a * b * c) << std::endl;
				return 0;
			}
		}
	}
	
	return 0;
}
