#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num;
	cin >> num;
	for(int i=0;i<num;i++)
	{
		vector<long int> births;
		long int in;
		long int total=0;
		total = 0;
		while(cin >> in && in != 0)
		{
			births.push_back(in);
		}
		for(int j=1;j<births.size();j++)
		{
			{
				long int diff = births[j]-(births[j-1]*2);
				if(diff>0)
				{
					total += diff;
				}
			}
		}
		cout << total << endl;
	}
	return 0;
}