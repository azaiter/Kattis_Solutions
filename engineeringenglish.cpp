#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
string low(string inp)
{
	string res;
	locale loc;
	for(string::size_type i=0;i<inp.length();i++)
	{
		res+=tolower(inp[i],loc);
	}
	return res;
}
int main() {
	string s;
	int i=0;
	vector<string> v;
	vector<string>::iterator iter=v.begin();
	while(cin>>s)
	{
		if(i==0){
			v.push_back(low(s));cout<<s<<" ";
		}
		else
		{
			iter=find(v.begin(),v.end(),low(s));
			if(iter!=v.end())
			{
				if(i==1){
						cout<<".";
					}
					else{
						cout<<" .";
					}	
			}
			else
			{
				if(i==1){
					cout<<s;
				}
				else{
					cout<<" "<<s;
				}
				v.push_back(low(s));
			}
		}
		i++;
	}
	return 0;
}