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
int check[5000];
memset(check,0,sizeof(check));

int num,mod,result=0;
for(int i=0;i<10;i++)
{
	cin >> num;
	mod = num%42;
	if(check[mod] != 1)
	{
		check[mod] = 1;
		result += 1;
	}
}
cout << result;
return 0;

}