#include <iostream>
#include <string>
using namespace std;

int p[13],k[13],h[13],t[13],pcnt,kcnt,hcnt,tcnt,i,c,n;


int main() {
	string str;
	cin>>str;
	c = 0;
	for(i=0;i<str.length();i=i+3)
	{
		n = (str[i + 1] - '0')*10 + str[i + 2] - '0';
		if(str[i] == 'P')
		{
			if(p[n] == 1)
			{
				c = 1;
			}
		p[n] = 1;
		pcnt++;
		}
		if(str[i] == 'K')
		{
			if(k[n] == 1)
			{
				c = 1;
			}
		k[n] = 1;
		kcnt++;
		}
		if(str[i] == 'H')
		{
			if(h[n] == 1)
			{
				c = 1;
			}
		h[n] = 1;
		hcnt++;
		}
		if(str[i] == 'T')
		{
			if(t[n] == 1)
			{
				c = 1;
			}
		t[n] = 1;
		tcnt++;}
	}
	if(c == 0)
	{
		cout<<13-pcnt<<" "<<13-kcnt<<" "<<13-hcnt<<" "<<13-tcnt;
	}
	else
	    cout<<"GRESKA";
	    
	return 0;
}