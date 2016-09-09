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

bool arePerm(string& a, string& b) {
	
	if (a.length() != b.length()) return false;
	
	for (int i = 0; i < a.length(); ++i) {
		int pb = b.find(a.at(i));
		if (pb != -1) b.erase(pb, 1);
	}
	
	return b.length() == 0; 
}

int main() {
	
	
	for (int i = 1; i < 200000; ++i) {
		
		string x = to_string(i);
		string x2 = to_string(2*i);
		if (!arePerm(x, x2)) continue;
		string x3 = to_string(3*i);
		if (!arePerm(x, x3)) continue;
		string x4 = to_string(4*i);
		if (!arePerm(x, x4)) continue;
		string x5 = to_string(5*i);
		if (!arePerm(x, x5)) continue;
		string x6 = to_string(6*i);
		if (!arePerm(x, x6)) continue;
		
		cout << i << endl;
	}
	
	
	
	return 0;
}

