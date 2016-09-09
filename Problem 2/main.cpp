#include <iostream>


int main() {
	
	int sum = 0;
	
	int n = 1;
	int m = 1;
	while (n < 4000000) {
		
		std::cout << n << std::endl;
		
		if (n % 2 == 0) {
			sum += n;
		}
		
		int tmp = n;
		n = n + m;
		m = tmp;
	}
	
	std::cout << "Somme : " << sum << std::endl;
	
	return 0;
}
