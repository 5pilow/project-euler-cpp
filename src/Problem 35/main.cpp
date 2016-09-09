#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <iostream>
#include <gmp.h>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

bool isPrime(int n) {
	
	int root = sqrt(n);
	
	for (int i = 3; i <= root; ++i)
		if (n % i == 0) return false;
	return true;
}

int main() {
	
	float total = 0;
	
	string s;
	string rot;
	string res;
	
	for (int i = 2; i < 1000000; ++i) {
		
		if (isPrime(i)) {
			
			s = to_string(i);
			
			bool good = true;
			int score = 0;
			for (int j = 0; j < s.length(); ++j) {
				if ((s.at(j) - '0') % 2 == 0) good = false;
				score += (s.at(j) - '0');
			}
			
			if (i == 2) good = true;
				
			if (good) {
				
				res = s + ", ";
				
				// On calcule toutes les rotations
				for (int j = 1; j < s.length(); ++j) {
					
					rot = "";
					for (int k = 0; k < s.length(); ++k) {
						rot += s.at((k + j) % s.length());
					}
					res += rot + ", ";
					if (!isPrime(stoi(rot))) {
						good = false;
						break;
					}
				}
				
				if (good) {
					cout << res << endl;
					total++;
				}
			}
		}
	}
	
	
	cout << "Total : " << total << endl;
	
	return 0;
}
