#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <iostream>
#include <gmp.h>
#include <vector>
#include <algorithm>

#define N 28123

using namespace std;

bool isAbundant(int n) {
	
	int sum = 0;
	int half = n / 2;
	
	for (int i = 1; i <= half; ++i)
		if (n % i == 0) {
			sum += i;
		}
	
	return sum > n;
}

int main() {
	
	int numbers[N];
	bool abundant[N];
	bool canBeWritten[N];
	
	for (int i = 0; i < N; ++i) {
		numbers[i] = i + 1;
		abundant[i] = isAbundant(i + 1);
		canBeWritten[i] = false;
	}
	
	for (int i = 0; i < N; ++i) {
		if (abundant[i]) {
			for (int j = 0; j < N; ++j) {
				if (abundant[j]) {
					int sum = numbers[i] + numbers[j];
					if (sum <= N) canBeWritten[sum - 1] = true;
				}
			}
		}
	}
	
	int sum = 0;
	for (int i = 0; i < N; ++i) {
		if (!canBeWritten[i]) sum += (i + 1);
	}
	
	cout << sum << endl;
	
	return 0;
}
