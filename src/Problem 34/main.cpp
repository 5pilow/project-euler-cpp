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
	
	int facts[10];
	facts[0] = 1;
	facts[1] = 1;
	for (int i = 2; i < 10; ++i) {
		facts[i] = i * facts[i - 1];
	}
	
	string s;
	int total = 0;
	
	for (int i = 3; i < 50000; ++i) {
		
		s = to_string(i);
		
		int sum = 0;
		for (int j = 0; j < s.length(); ++j) {
			sum += facts[s.at(j) - '0'];
		}
		if (sum == i) {
			total += i;
			cout << sum << endl;
		}
	}
	
	cout << "Total : " << total << endl;
	
	return 0;
}
