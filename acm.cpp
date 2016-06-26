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

// declare a nice long int array that fits possible album number
// this is good for N(1) searching speed.
long int A[2000010];

int main()
{
// declare N
long int N;
int result =0;
unsigned char ch;
char str[5];
int cnt=0;
// zero out the array
memset(A,0,sizeof(A));
cin >> N >> ch >> str;
while(N != -1)
{
	if(str[0] == 'w')
	{
		A[ch] += 20;
	}
	else
	{
	    cnt = cnt + 1;
		result = result + (A[ch] + N);
	}
	cin >> N >> ch >> str;
}

cout << cnt << " " << result;
return 0;

}