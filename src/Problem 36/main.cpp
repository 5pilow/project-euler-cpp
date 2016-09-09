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

string binary(int num) {
    // convert to binary string (could just cout << the bitset, too)
    string bin = bitset<CHAR_BIT * sizeof num>(num).to_string();
    bin = num ? bin.substr(bin.find('1')) : "0"; // trim leading zeroes
    return bin;
}

bool palin(string s) {
	return s == string(s.rbegin(), s.rend());
}

int main() {
	
	int sum = 0;
	int c = 0;
	string bin;
	
	for (int i = 0; i < 1000000; ++i) {
		
		bin = binary(i);
		if (palin(to_string(i)) && palin(bin)) {
			cout << i << " / " << bin << endl;
			sum += i;
			c++;
		}
	}
	
	cout << "Total : " << c << endl;
	cout << "Somme : " << sum << endl;
	
	return 0;
}
