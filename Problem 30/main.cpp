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


int main() {
	
	string str;
	int total = 0;
	
	for (int i = 2; i < 200000; ++i) {
		
		str = to_string(i);
		int sum = 0;
		for (int j = 0; j < str.length(); ++j) {
			sum += pow(str[j] - '0', 5);
		}
		if (sum == i) {
			cout << i << endl;
			total += i;
		}
	}
	
	cout << "Total : " << total << endl;
	
	return 0;
}
