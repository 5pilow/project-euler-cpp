#include <iostream>
#include <math.h>

int main() {
	
	long N = 600851475143;
	long root = sqrt(N);
	
	for (long i = 1; i <= root; ++i) {
		if (N % i == 0) {
			N /= i;
			std::cout << i << std::endl;
		}
	}
	
	return 0;
}
