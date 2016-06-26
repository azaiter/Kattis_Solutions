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

// declare a nice long int array that fits possible album number
vector<string> v;

int main()
{

int cnt1,cnt2=0;
cin >> cnt1;
for(int i = 0; i<cnt1;i++)
{
	int result =0;
	fill(v.begin(), v.end(), 0);
	string str; 
	cin >> cnt2;
	for(int j =0;j<cnt2;j++)
	{
		cin >> str;
		if(!(find(v.begin(), v.end(), str) != v.end()))
		{
			v.push_back(str);
			result +=1;
		}
	}
	cout << result << endl;
}
return 0;

}