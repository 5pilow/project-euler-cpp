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
	int digits[9];
	for (int i = 0; i < 9; ++i) digits[i] = 0;
	for (int i = 0; i < s.length(); ++i) digits[s.at(i) - '1']++;
	bool good = true;
	for (int i = 0; i < 9; ++i) if (digits[i] != 1) {good = false; break;}
	return good;
}

int main() {
	
	string s;
	string res;
	int c;
	
	for (int i = 0; i < 10000; ++i) {
		
		s = to_string(i);
		res = "";
		c = 9 / s.length();
		
		for (int j = 0; j < c; ++j) {
			res += to_string(i * (j + 1));
			if (res.length() == 9 && is9Pandi(stoi(res))) {
				cout << res << " : " << i << " (";
				for (int k = 0; k <= j; ++k) {
					cout << i << "×" << (k + 1);
					if (k < j) cout << " + ";
				}
				cout << ")" << endl;
			}
			if (res.length() > 9) break;
		}
	}
	
	return 0;
}
