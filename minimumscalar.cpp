#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T,n,X;
	X = 0;
	long int in;
	cin >> T;
	while(T--)
	{
		X += 1;
		vector<long int> x;
		vector<long int> y;
		long int total = 0;
		cin >> n;
		for(int i=0;i<n;i++)
		{
			cin >> in;
			x.push_back(in);
		}
		for(int i=0;i<n;i++)
		{
			cin >> in;
			y.push_back(in);
		}
		sort(x.begin(),x.end());
		sort(y.rbegin(),y.rend());
		for(int i=0;i<n;i++)
		{
			total += x[i]*y[i];
		}
		cout << "Case #" << X << ": " << total << endl;
	}
	return 0;
}