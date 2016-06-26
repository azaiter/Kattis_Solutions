
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
	int cnt1=0;
	int cnt2=0;
	string s;
	float x,y,result=0;
	float rx1[30],rx2[30],ry1[30],ry2[30],cr[30],cx[30],cy[30];
	memset(rx1,2000,sizeof(rx1));
	memset(rx2,2000,sizeof(rx2));
	memset(ry1,2000,sizeof(ry1));
	memset(ry2,2000,sizeof(ry2));
	memset(cx,2000,sizeof(cx));
	memset(cr,2000,sizeof(cr));
	memset(cy,2000,sizeof(cy));
	
	cin >> cnt1;
	for(int i=0;i<cnt1;i++)
	{
		cin >> s;
		if(s == "rectangle")
		{
			cin >> rx1[i] >> ry1[i] >> rx2[i] >> ry2[i];
		}
		else
		{
			cin >> cx[i] >> cy[i] >> cr[i];
		}
	}
	
	cin >> cnt2;
	for(int i=0;i<cnt2;i++)
	{
	    result = 0;
		cin >> x >> y;
		for(int i=0;i<cnt1;i++)
		{
			if((rx1[i] <= x && rx2[i] >= x && ry1[i] <= y && ry2[i] >= y && ry1[i] <= 1000))
			{
				result ++;
			}
			//if((cx[i] >= x && y <= (sqrt(cr[i]*cr[i] - y*y ))))
			if (((((x-cx[i])*(x-cx[i]))+((y-cy[i])*(y-cy[i])))<= (cr[i]*cr[i])) && cr[i] <= 1000)
			{
				result++;
			}
			
		}
		cout << result << endl;
	}
	
return 0;
}