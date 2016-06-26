#include<iostream>
using namespace std;
#include<string>
#include<stdio.h>
#include<cstring>
#include<math.h>
#include<queue>
#include<stdlib.h>
#include<map>
#include<vector>
#include<list>
#include<algorithm>

int main()
{
int cnt=0;
string str;
vector<string> sList;
cin >> cnt;
for(int j=0;j<cnt;j++)
{
	cin >> str;
	sList.push_back(str);
}
if(is_sorted(sList.begin(),sList.end()))
{
	cout << "INCREASING";
}
else
{
    reverse(sList.begin(), sList.end());
    if(is_sorted(sList.begin(),sList.end()))
    {
	    cout << "DECREASING";
    }
    else
	    cout << "NEITHER";
}

return 0;
}