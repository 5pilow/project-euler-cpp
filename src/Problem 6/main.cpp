#include <iostream>
#include <math.h>
#include <string>

int main() {
	
	int sum = 0;
	int sum2 = 0;
	for (int i = 1; i <= 100; ++i) {
		sum += i;
		sum2 += i * i;
	}
	sum *= sum;
	
	
	
	std::cout << "Somme au carré : " << sum << std::endl;
	std::cout << "Somme des carrés : " << sum2 << std::endl;
	std::cout << "Différence : " << sum - sum2 << std::endl;
	
	return 0;
}
