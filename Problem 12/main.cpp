#include <iostream>
#include <math.h>
#include <string>

int numFactors(int n) {
	
	int num = 0;
	int root = sqrt(n);
	
	for (int i = 1; i <= root; ++i)
		if (n % i == 0) {
			num += 2;
		}
	return num;
}


int main() {
	
	int num = 0;
	int i = 1;
	int j, n;
	
	while (num < 500) {
		
		for (j = 0, n = 0; j < i; ++j) n += j;
		
		num = numFactors(n);
		i++;
	}
	
	std::cout << n << std::endl;
	
	return 0;
}
