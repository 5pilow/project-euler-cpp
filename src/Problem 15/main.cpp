#include <iostream>
#include <math.h>
#include <string>

#define S 20

static long long paths[S];

void walk(int x, int y) {
	
	if (x + y == S) {
		paths[y]++;
		return;
	}
	if (x > 0) walk(x - 1, y);
	if (y > 0) walk(x, y - 1);
}

int main() {
	
	walk(S, S);
	
	long long sum = 1;
	for (int i = 0; i < S; ++i)
		sum += paths[i] * paths[i];
	
	std::cout << sum << std::endl;
	
	return 0;
}
