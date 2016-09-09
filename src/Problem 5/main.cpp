#include <iostream>
#include <math.h>
#include <string>

int good(int n) {
	
	for (int i = 2; i <= 20; ++i)
		if (n % i != 0) return false;
	return true;
}

int main() {
	
	int n = 1;
	while (!good(++n));
	
	std::cout << "Number : " << n << std::endl;
	
	return 0;
}
