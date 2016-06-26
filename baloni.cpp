#include <iostream>
using namespace std;

int check[1000001]; // credits: my lovely CD problem logic
int main() {
	int cnt,result=0,in;
	cin >> cnt;
	for(int i=0;i<cnt;i++)
	{
		cin >> in;
		check[in]++; // increase what's inside the index
		in++; // go to the next
		if(check[in]>0) // check if the next was there, otherwise add one to result
			check[in]--;
		else
			result++;
	}
	cout << result;
	return 0;
}