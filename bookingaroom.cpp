#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int avail,booked,num,out;
	vector<int> vec;
	cin >> avail >> booked;
	for(int i=0;i<booked;i++)
	{
		cin >> num;
		vec.push_back(num);
	}
	sort(vec.begin(),vec.end());
	for(int j=0;j<vec.size();j++)
	{
		
		//if((vec[j]-vec[j-1])!=1)
		if (!(find(vec.begin(), vec.end(), vec[j]+1) != vec.end()) && vec[j]+1 <= avail )
			{
				cout << vec[j]+1;
				break;
			}
		if (!(find(vec.begin(), vec.end(), vec[j]-1) != vec.end()) && vec[j]-1 > 0 )
			{
				cout << vec[j]-1;
				break;
			}
		
	}
	//if((vec[vec.size()-1]!=booked) && (vec.size() != booked))
		//	cout << vec[vec.size()-1]+1;
			
	if(avail==booked)
	{
		cout << "too late";
	}
	if(booked == 0)
	{
	    cout << "1";
	}
	if(booked == 1)
	{
		if(num-1 != 0)
		{
			cout << num - 1;
			//break;
		}
		else if(num+1!=booked)
		{
			if(avail>1 && num < avail)
				cout << num + 1;
			//break;
		}
		
	}
	return 0;
}