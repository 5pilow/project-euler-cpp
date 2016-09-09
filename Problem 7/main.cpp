#include <iostream>
#include <math.h>
#include <string>


bool isPrime(int n) {
	
	if (n == 0 || n == 1) return false;
	if (n == 2) return true;
	
	int root = sqrt(n);
	
	for (int i = 3; i <= root; ++i)
		if (n % i == 0) return false;
	return true;
}


int main() {
	
	int index = 1; // On compte le 2
	int i = 1; // On commence à 3
	
	while (index < 10001) {
		i += 2;
		if (isPrime(i)) {
			index++;
			std::cout << "n°" << index << " : " << i << std::endl;
		}
	}
	
	std::cout << i << std::endl;
	
	return 0;
}
