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


int main()
{

int cnt,cntA,cntB,tmp=0;
cin >> cnt;
for(int i =0 ;i<=cnt;i++)
{
	if(i==0)
		cntA = 1;
	if(i==1)
		{cntA=0;cntB=1;}
	if(i==2)
		{cntA=1;cntB=1;}
	if(i > 2)
	{
	    tmp = cntA;
		cntA = cntB;
		cntB = tmp+cntB;
	}
}
cout << cntA << " " << cntB;
return 0;

}