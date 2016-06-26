#include <iostream>
using namespace std;

int sumOfDigits(int numIn){
	int num = numIn;
	int sum = 0;
	while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
	return sum;
}

int main() {
	int min,max,num,lowOut =0 ,maxOut = 0;
	cin >> min >> max >> num;
	for(int i=min;i<=max;i++)
	{
		if(sumOfDigits(i) == num)
		{
			lowOut=i;
			break;
		}
	}
	for(int j=max;j>=min;j--)
	{
		if(sumOfDigits(j) == num)
		{
			maxOut=j;
			break;
		}
	}
	cout << lowOut << endl << maxOut;
	return 0;
}