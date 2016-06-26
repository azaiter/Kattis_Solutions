#include <iostream>
#include <string>
using namespace std;

int main() {
	int min,max,num,cnt,cases;
	min = 2000000;
	max = -2000000;
	cases = 0;
	while(cin >> cnt)
	{
		cases++;
		min = 2000000;
		max = -2000000;
		for(int i=0;i<cnt;i++)
		{
			cin >> num;
			if(num < min)
				min = num;
			if(num>max)
				max = num;
		}
		cout << "Case " << cases << ": " << min << " " << max << " " << max - min << endl;
	}
	return 0;
}