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
//int check[2000];
//memset(check,0,sizeof(check));
//int check2[2000];
//memset(check2,0,sizeof(check2));
int a1,a2,b1,b2,c1,c2,d1,d2=0;

cin >> a1>>a2>>b1>>b2>>c1>>c2;

if(a1==b1) d1 = c1;
if(a1==c1) d1 = b1;
if(b1==c1) d1 = a1;

if(a2==b2) d2 = c2;
if(a2==c2) d2 = b2;
if(b2==c2) d2 = a2;

cout << d1 << " " << d2;

return 0;
}