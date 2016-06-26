#include <iostream>
#include <cmath>
#define PI 3.14159265
using namespace std;

int main() {
	unsigned long int a,b;
	long double c;
	cin >> a >> b;
		c = ceil(double(a)/sin(double(b)*PI/180));
		cout << c;
	return 0;
}