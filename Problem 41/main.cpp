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

bool is9Pandi(int n) {
	string s = to_string(n);
	if (s.length() == 9) {
		int digits[9];
		for (int i = 0; i < 9; ++i) digits[i] = 0;
		for (int i = 0; i < s.length(); ++i) digits[s.at(i) - '1']++;
		bool good = true;
		for (int i = 0; i < 9; ++i) if (digits[i] != 1) {good = false; break;}
		return good;
	}
	return false;
}

int isPrime(long long int n) {
	
	long long int root = sqrt(n);
	
	for (long long int i = 3; i <= root; ++i)
		if (n % i == 0) return i;
	return 0;
}

#define L 7

int main() {
	
	cout.precision(10);
	
	int num = 0;
	string s;
	
	for (int a = 1; a <= L; ++a)
	for (int b = 1; b <= L; ++b)
	if (b != a)
	for (int c = 1; c <= L; ++c)
	if (c != b && c != a)
	for (int d = 1; d <= L; ++d)
	if (d != c && d != b && d != a)
	for (int e = 1; e <= L; ++e)
	if (e != d && e != c && e != b && e != a)
	for (int f = 1; f <= L; ++f)
	if (f != e && f != d && f != c && f != b && f != a)
	for (int g = 1; g <= L; ++g)
	if (g != f && g != e && g != d && g != c && g != b && g != a) {
	
	//~ for (int h = 1; h <= L; ++h)
	//~ if (h != g && h != f && h != e && h != d && h != c && h != b && h != a) {
		
	//~ for (int i = 1; i <= 9; i += 2) // i impair pour que ça soit premier
	//~ if (i != h && i != g && i != f && i != e && i != d && i != c && i != b && i != a) {
		
		long long int n = a*1000000L + b*100000L + c*10000L + d*1000 + e*100 + f*10 + g;
		//~ long long int n = a*10000000L + b*1000000L + c*100000L + d*10000 + e*1000 + f*100 + g*10 + h;
		//~ long long int n = a*100000000L + b*10000000L + c*1000000L + d*100000 + e*10000 + f*1000 + g*100 + h*10 + i;
		
		if (isPrime(n) == 0) cout << n << endl;
	}
	
	
	return 0;
}

