#include <iostream>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;

std::string get(int n) {
	
	if (n == 1) return string("one");
	if (n == 2) return string("two");
	if (n == 3) return string("three");
	if (n == 4) return string("four");
	if (n == 5) return string("five");
	if (n == 6) return string("six");
	if (n == 7) return string("seven");
	if (n == 8) return string("eight");
	if (n == 9) return string("nine");
	if (n == 10) return string("ten");
	if (n == 11) return string("eleven");
	if (n == 12) return string("twelve");
	if (n == 13) return string("thirteen");
	if (n == 14) return string("fourteen");
	if (n == 15) return string("fifteen");
	if (n == 16) return string("sixteen");
	if (n == 17) return string("seventeen");
	if (n == 18) return string("eighteen");
	if (n == 19) return string("nineteen");
	
	if (n == 20) return string("twenty");
	if (n == 30) return string("thirty");
	if (n == 40) return string("forty");
	if (n == 50) return string("fifty");
	if (n == 60) return string("sixty");
	if (n == 70) return string("seventy");
	if (n == 80) return string("eighty");
	if (n == 90) return string("ninety");
	
	if (n < 100) {
		int diz = (n / 10) * 10;
		return get(diz) + get(n - diz);
	}
	
	if (n < 1000) {
		int cent = n / 100;
		int reste = n % 100;
		string res = get(cent) + "hundred";
		if (reste > 0) {
			res += "and" + get(reste);
		}
		return res;
	}
	return string("onethousand");
}

int main() {
	
	std::string* numbers = new std::string[1000];
	int sum = 0;
	for (int i = 1; i <= 1000; ++i) {
		numbers[i - 1] = get(i);
		sum += numbers[i - 1].length();
	}
		
	cout << get(342) << " : " << get(342).length() << endl;
		
	cout << sum << endl;
	
	delete[] numbers;
	
	return 0;
}
