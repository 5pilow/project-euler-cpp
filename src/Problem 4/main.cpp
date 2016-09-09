#include <iostream>
#include <math.h>
#include <string>

int isPalin(int n) {
	std::string s = std::to_string(n);
	return n == std::stoi(std::string(s.rbegin(), s.rend()));
}

int main() {
	
	int n;
	int max = 0;
	
	for (int i = 1; i < 1000; ++i) {
		for (int j = 1; j < 1000; ++j) {
		
			n = i * j;
			
			if (isPalin(n))
				if (n > max)
					max = n;
		}
	}
	
	std::cout << "Largest palindromic number : " << max << std::endl;
	
	return 0;
}
