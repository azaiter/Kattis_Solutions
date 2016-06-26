#include <iostream>
using namespace std;

int main() {
	long int a,b,c,d;
	int cnt = 0;
	long int det;
	while(cin >> a >> b >> c >> d)
	{
		cnt++;
		det = 1/((a*d)-(b*c));
		a = a*det;
		b= b*det;
		c=c*det;
		d=d*det;
		cout << "Case " << cnt << ":" << endl << d << " " << (-1)*b << endl << (-1)*c << " " << a << endl;
	}
	return 0;
}