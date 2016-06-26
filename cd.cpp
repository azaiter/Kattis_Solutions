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

long int A[2000010];
int main()
{
long int N, M;
cin >> N >> M;
while( N!=0 || M!=0)
{
memset(A,0,sizeof(A));
for( int i=0; i!=N; ++i)
{
long int x;
cin >> x;
A[x]=1;
}

long int result=0;
for( int i=0; i!=M; ++i)
{
long int x;
cin >> x;
if( A[x]==1) ++result;
}

cout << result << endl;

cin >> N >> M;
}

return 0;

}