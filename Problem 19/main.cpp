#include <iostream>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;

int main() {
	
	int day = 1; // 1 janvier 1901 => mardi
	int sundays = 0;
	
	for (int i = 1901; i <= 2000; ++i) {
		
		bool leap = (i % 100 != 0 && i % 4 == 0) || (i % 400 == 0);
		
		for (int m = 0; m < 12; ++m) {
			
			if (day % 7 == 6) sundays++;
			
			if (m == 3 || m == 5 || m == 8 || m == 10) {
				day += 30;
			} else if (m == 1) {
				day += leap ? 29 : 28;
			} else {
				day += 31;
			}
		}
	}
	
	cout << "Dimanches : " << sundays << endl;
	
	return 0;
}
