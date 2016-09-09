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

bool isGood(long long int n) {
	string s = to_string(n);
	return (stoi(s.substr(1,3)) % 2 == 0 &&
			 stoi(s.substr(2,3)) % 3 == 0 &&
			 stoi(s.substr(3,3)) % 5 == 0 &&
			 stoi(s.substr(4,3)) % 7 == 0 &&
			 stoi(s.substr(5,3)) % 11 == 0 &&
			 stoi(s.substr(6,3)) % 13 == 0 &&
			 stoi(s.substr(7,3)) % 17 == 0);
}

#define L 9

int main() {
	
	long long int sum = 0;
	
	for (int a = 0; a <= L; ++a)
	for (int b = 0; b <= L; ++b)
	if (b != a)
	for (int c = 0; c <= L; ++c)
	if (c != b && c != a)
	for (int d = 0; d <= L; ++d)
	if (d != c && d != b && d != a)
	for (int e = 0; e <= L; ++e)
	if (e != d && e != c && e != b && e != a)
	for (int f = 0; f <= L; ++f)
	if (f != e && f != d && f != c && f != b && f != a)
	for (int g = 0; g <= L; ++g)
	if (g != f && g != e && g != d && g != c && g != b && g != a)
	for (int h = 0; h <= L; ++h)
	if (h != g && h != f && h != e && h != d && h != c && h != b && h != a)
	for (int i = 0; i <= L; i++)
	if (i != h && i != g && i != f && i != e && i != d && i != c && i != b && i != a)
	for (int j = 0; j <= L; j++)
	if (j != i && j != h && j != g && j != f && j != e && j != d && j != c && j != b && j != a) {
		
		long long int n = a*1000000000L + b*100000000L + c*10000000L + d*1000000 + e*100000 + f*10000 + g*1000 + h*100 + i*10 + j;
		
		if (isGood(n)) {
			sum += n;
			cout << n << endl;
		}
	}
	
	
	cout << "Somme : " << sum << endl;
	
	return 0;
}

