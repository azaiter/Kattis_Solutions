#include <iostream>
#include <cmath>
using namespace std;

int main() {
	unsigned int cnt,s,d,big,small;
	string out;
	cin >> cnt;
	for(int i=0;i<cnt;i++)
	{
		out = "impossible";
		cin >> s >> d;
		//cout << s << " " << d;
		if(s>d)
		{
			big = s;
			small = d;
		}
		else
		{
			big = d;
			small = s;
		}
		
		
		for(int j=0;j<=big;j++)
		{
			for(int z=0;z<=big;z++)
			{
				if(out!="OK")
				{
					if((abs(j-z)==d)&&((j+z)==s))
					{
						if(z>j)
							cout << z << " " << j << endl;
						else
							cout << j << " " << z << endl;
						out = "OK";
					}
				}
			}
		}
		if(out!="OK") cout << out << endl;
	}
	return 0;
}