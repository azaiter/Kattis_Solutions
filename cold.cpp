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
int cnt,temp,result = 0;
cin >> cnt;
for(int i=0; i<cnt; i++)
{
	cin >> temp;
	if(temp < 0) result++;
}
cout << result;
return 0;
}