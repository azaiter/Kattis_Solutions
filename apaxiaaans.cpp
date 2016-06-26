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
string str;
cin >> str;
for(int i=0;i<str.length();i++)
{
	if(str[i] == str[i-1])
		str[i-1] = '_';
}
for(int i =0; i<str.length();i++)
{
	if(str[i] != '_')
		cout << str[i];
}
return 0;
}