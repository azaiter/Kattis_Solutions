#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int arr[4];
	int tmp;
	for(int i=0;i<4;i++)
		cin >> arr[i];
		
	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if(arr[i]>arr[j]){
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	
	cout << (arr[0] * arr[2]) << endl;
	return 0;
}