#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int handler[200];
 
int main()
{
	int cnt;
	cin >> cnt;
	for(int z=0;z<cnt;z++)
	{
		int result = 0, first;
		cin >> first;
		for( int i = 0; i < 20; i++ )
		{
			cin >> handler[ i ];
			for( int j = i; j > 0; j-- )
			{
				if( handler[j-1] > handler[j] )
				{
					result++;
					swap(handler[j-1], handler[j]);
				}
			}
		}
		cout << first << " " << result << endl;
	}
	return 0;
}