#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double num;
	double sum;
	
	while(cin >> num)
	{
		//old way, a computive algorithim, not fast enough.
		//sum = 0;
		//for(int i=1;i<=num;i++)
		//{
		//	sum += log10((double)i);
		//}
		//if(ceil(sum)>0)
		//	cout << ceil(sum) << endl;
		//else 
		//	cout << 1 << endl;
		//cout.setf(ios::fixed);
		
		if(num > 1)
			// a better mathematical algorithim with N(1), abstract algorithm is taken from math academy website.
			cout << fixed << setprecision(5) << (int)floor(((log(2*M_PI*num)/2+num*(log(num)-log(exp(1.0))))/log(10))+1) << endl;
		else
			cout << 1 << endl;
	}
	return 0;
}