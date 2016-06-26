#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

//solve function algorithim is taken from other sources and edited to fit problem requirments.
string solve(vector<int> col)
{
	bool truth=true;
	for(int i=0;i<col.size()-2;i++)
	{
		if(col[i+1]-col[i]!=col[i+2]-col[i+1])
		{
			truth=false;
			break;
		}
	}
	if(truth){return "arithmetic\n";}
	else
	{
		sort(col.begin(),col.end());
		bool truthd=true;
		for(int i=0;i<col.size()-2;i++)
		{
			if(col[i+1]-col[i]!=col[i+2]-col[i+1])
			{
				truthd=false;
				break;
			}
		}
		if(truthd){return "permuted arithmetic\n";}
		else{return "non-arithmetic\n";}
	}
}
int main() {
	int tc;
	cin>>tc;
	for(int i=0;i<tc;i++)
	{
		int size,temp;
		cin>>size;
		vector<int> col;
		for(int j=0;j<size;j++)
		{cin>>temp;col.push_back(temp);}
		cout<<solve(col);
	}
	return 0;
}