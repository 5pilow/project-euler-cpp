#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <iostream>
#include <gmp.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <bitset>
#include <climits>

using namespace std;

bool isPrime(int n) {
	
	if (n == 0 || n == 1) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	
	int root = sqrt(n);
	
	for (int i = 3; i <= root; ++i)
		if (n % i == 0) return false;
	return true;
}

int main() {
	
	int total = 0;
	string s;
	string res;
	string part, part2;
	
	for (int i = 10; i < 1000000; ++i) {
		
		if (isPrime(i)) {
			
			s = to_string(i);
			res = s;
			
			bool good = true;
			for (int j = 0; j < s.length() - 1; ++j) {
				
				part = s.substr(0, s.length() - j - 1);
				part2 = s.substr(j + 1);
				if (!isPrime(stoi(part)) || !isPrime(stoi(part2))) {
					good = false;
					break;
				}
				res += ", " + part + ", " + part2;
			}
			
			if (good) {
				cout << res << endl;
				total += i;
			}
		}
	}
	
	cout << "Total : " << total << endl;
	
	
	return 0;
}
