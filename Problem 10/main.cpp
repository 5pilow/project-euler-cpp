#include <iostream>
#include <math.h>
#include <string>

bool isPrime(int n) {
	
	int root = sqrt(n);
	
	for (int i = 3; i <= root; ++i)
		if (n % i == 0) return false;
	return true;
}

int main() {
	
	long sum = 0;
	
	sum += 2;
	sum += 3;
	
	for (int i = 5; i <= 2000000; i += 2) {
		if (isPrime(i)) sum += i;
	}
	
	std::cout << sum << std::endl;
	
	return 0;
}
