#include <iostream>
#include <math.h>
using namespace std;

const double e = 2.71828;

double foo(int i) {
	if (i == 1) {
		return 1;
	}
	else {
		return foo(i - 1) + pow(e, i) / 100;
	}
}
int main() {
	cout << "n = ";
	int input;
	cin >> input;
	cout << foo(input);
}