#include<iostream>
using namespace std;

int main()
{

int n1,n2,n3,n4,sum,sumW,numW=0;
 n1=n2=n3=n4=sum=sumW=numW=0;
 
for(int i=1;i<=5;i++)
{
    cin >> n1 >> n2 >> n3 >> n4;
    sum = n1+n2+n3+n4;
    if(sum >= sumW)
    {
        sumW = sum;
        numW = i;
    }
}

cout << numW << ' ' << sumW;
return 0;
}