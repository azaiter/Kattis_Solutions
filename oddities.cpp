#include<iostream>
using namespace std;
#include<string>
#include<stdio.h>
#include<cstring>
#include<math.h>
#include<queue>
#include<stdlib.h>
#include<algorithm>
#include<map>
#include<vector>


int main()
{

int cnt,num=0;
cin >> cnt;
for(int i=0;i<cnt;i++)
{
	cin >> num;
	if(num%2 == 0)
	{
		cout << num << " is even" << endl;
	}
	else
		cout << num << " is odd" << endl;
}
return 0;

}