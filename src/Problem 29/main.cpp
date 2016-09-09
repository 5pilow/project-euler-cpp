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
	
	vector<double> nb;
	
	int n = 0;
	for (int a = 2; a <= 100; ++a) {
		for (int b = 2; b <= 100; ++b) {
			nb.push_back(pow(a, b));
		}
	}
	
	for (int i = 0; i < nb.size(); ++i) {
		double val = nb.at(i);
		for (int j = 0; j < nb.size(); ++j) {
			if (i != j) {
				if (nb.at(j) == val) {
					nb.erase(nb.begin() + j);
					j--;
				}
			}
		}
	}
	
	cout << nb.size() << endl;
	
	return 0;
}
