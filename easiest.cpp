#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n,t,r,sum=0;
	cin>>n;
	while(n != 0)
	{
	sum = 0;
	t=n;
	while(t>0)
	{
	    r=t%10;
		sum+=r;
		t=t/10;
	}
	int p = 10;
	int n2,t2,r2,sum2=0;
	while(sum2 != sum)
	{
	    p++;
	    sum2=0;
	    n2 = n*p;
	    t2 = n2;
	    while(t2>0)
    	{
	      r2=t2%10;
	    	sum2+=r2;
	    	t2=t2/10;
	    }	
	}
	cout << p << endl;
	cin >> n;
	}
return 0;
}
