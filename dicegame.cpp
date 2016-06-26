#include <iostream>
using namespace std;

int main() {
	int g1,g2,g3,g4,e1,e2,e3,e4;
	cin >> g1 >> g2>>g3>>g4>>e1>>e2>>e3>>e4;
	int sumG=g1+g2+g3+g4;
	int sumE=e1+e2+e3+e4;
	if(sumG==sumE) cout << "Tie";
	else if (sumG>sumE) cout << "Gunnar";
	else if (sumG<sumE) cout << "Emma";
	return 0;
}