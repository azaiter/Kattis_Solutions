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
int cnt=0;
string str,str2;
cin >> cnt;

for(int i=0;i<cnt;i++)
{
	cin >> str >> str2;
	cout << str << endl << str2<< endl;
	for(int j=0;j<str.length();j++)
	{
		if(str[j]==str2[j])
			cout << ".";
		else
			cout << "*";
	}
	cout << endl << endl;
}

return 0;

}