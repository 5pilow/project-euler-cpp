#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <iostream>
#include <gmp.h>

using namespace std;

int sumDiv(int n) {
	int num = 0;
	
	for (int i = 1; i < n; ++i)
		if (n % i == 0) {
			num += i;
		}
	return num;
}

bool isAmicable(int i) {
	
	int sum = sumDiv(i);
	return sum != i && sumDiv(sum) == i;
}

int main() {
	
	int sum = 0;
	for (int i = 1; i <= 10000; ++i) {
		if (isAmicable(i)) sum += i;
	}
	
	cout << sumDiv(220) << endl;
	cout << sumDiv(284) << endl;
	
	std::cout << sum << std::endl;
	
	return 0;
}
