#include <iostream>
using namespace std;

int main() {
	int location = 1;
	char move;
	while(cin >> move)
	{
		if(move == 'A')
		{
			if(location == 1)
				location = 2;
			else if(location == 2)
				location = 1;
		}
		if(move == 'B')
		{
			if(location == 2)
				location = 3;
			else if(location == 3)
				location = 2;
		}
		if(move == 'C')
		{
			if(location == 1)
				location = 3;
			else if(location == 3)
				location = 1;
		}
	}
	cout << location;
	return 0;
}