#include <iostream>
using namespace std;

struct thing
{
	int x,y,z;
};

int main()
{
	int numGbln;
	cin >> numGbln;
	thing gblnArr[numGbln];
	for (int i = 0; i < numGbln; i++) {
		cin >> gblnArr[i].x;
		cin >> gblnArr[i].y;
	}
	int numSprnkl;
	cin >> numSprnkl;
	thing sprnklersArr[numSprnkl];
	for (int i = 0; i < numSprnkl; i++) {
		cin >> sprnklersArr[i].x;
		cin >> sprnklersArr[i].y;
		cin >> sprnklersArr[i].z;
	}
	int cnt = 0;
	for (int j = 0; j < numGbln; j++) {
		for (int z = 0; z < numSprnkl; z++) {
			int x = gblnArr[j].x - sprnklersArr[z].x;
			int y = gblnArr[j].y - sprnklersArr[z].y;
			if (x*x+y*y <= sprnklersArr[z].z*sprnklersArr[z].z) {
				cnt++;
				break;
			}
		}
	}
	cout << numGbln-cnt;
	return 0;
}