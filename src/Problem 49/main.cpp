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

bool isPrime(long long int n) {
	
	long long int root = sqrt(n);
	if (n == 2) return true;
	if (n == 0 || n == 1 || n % 2 == 0) return false;
	
	for (long long int i = 3; i <= root; i += 2)
		if (n % i == 0) return false;
	return true;
}

bool arePerm(int a, int b, int c) {
	
	string sa = to_string(a);
	string sb = to_string(b);
	string sc = to_string(c);
	
	for (int i = 0; i < 4; ++i) {
		char k = sa.at(i);
		int pb = sb.find(k);
		if (pb != -1) sb.erase(pb, 1);
		int pc = sc.find(k);
		if (pc != -1) sc.erase(pc, 1);
	}
	
	return sb.length() == 0 && sc.length() == 0; 
}

int main() {
	
	for (int i = 1000; i <= 9999; ++i) {
		
		if (isPrime(i)) {
			
			int maxStep = (9999 - i) / 2;
			
			for (int s = 2; s < maxStep; ++s) {
				
				if (isPrime(i + s) && isPrime(i + 2*s)) {
					
					if (arePerm(i, i + s, i + 2*s)) {
						cout << i << ", " << (i + s) << ", " << (i + 2*s) << ", step = " << s << endl;
						cout << "Nombre composé : " << i << (i + s) << (i + 2*s) << endl;
					}
				}
			}
		}
	}
	
	return 0;
}

