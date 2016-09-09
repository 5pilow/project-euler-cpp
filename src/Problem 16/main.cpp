#include <iostream>
#include <math.h>
#include <string>
#include <sstream>

int main() {
	
	long double n = pow(2, 1000);
	
	std::stringstream ss;
	ss.precision(400);
	ss << n;
	std::string s = ss.str();
	
	int sum = 0;
	for (int i = 0; i < s.length(); ++i) {
		sum += s.at(i) - '0';
	}
	
	std::cout << s << std::endl;
	
	std::cout << sum << std::endl;
	
	return 0;
}
