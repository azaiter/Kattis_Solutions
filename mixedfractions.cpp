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
int t,b,mod,div;
while(cin >> t >> b&&(t!=0&&b!=0))
{
	mod = t%b;
	div = t / b;
	cout << div << " " << mod << " / " << b <<endl;
}
return 0;
}