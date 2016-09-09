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
	
	int size = 1001;
	
	long long int n = 1;
	int steps = size / 2;
	
	for (int i = 1; i <= steps; ++i) {
		int x = 2*i + 1;
		n += x*x;
		n += x*x - 6*i;
		n += x*x - 4*i;
		n += x*x - 2*i;
	}
	
	cout << n << endl;
	
	return 0;
}
