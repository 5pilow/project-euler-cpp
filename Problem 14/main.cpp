#include <iostream>
#include <math.h>
#include <string>

int chainSize(long n) {
	
	int size = 0;
	
	while (n != 1) {
		if (n % 2 == 0) n /= 2;
		else n = 3*n + 1;
		size++;
	}
	return size;
}


int main() {
	
	int max = 0;
	int n = -1;
	
	for (int i = 1; i <= 1000000; i += 2) {
		int chain = chainSize(i);
		if (chain > max) {
			max = chain;
			n = i;
		}
	}
	
	std::cout << "Max chaine : " << max << " avec le nombre " << n << std::endl;
	
	return 0;
}
