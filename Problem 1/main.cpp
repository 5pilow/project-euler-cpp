#include <iostream>

int main() {
	
	int sum = 0;
	
	for (int i = 1; i < 1000; ++i) {
		
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	
	std::cout << "Somme des multiples de 3 et 5 entre 1 et 1000 : " << sum << std::endl;
	
	return 0;
}
