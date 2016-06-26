#include<iostream>
using namespace std;
#include<string>
#include<stdio.h>
#include<cstring>
#include<math.h>
#include<queue>
#include<stdlib.h>
#include<map>
#include<vector>
#include<list>
#include<algorithm>

struct compare {
    bool operator()(const std::string& first, const std::string& second) {
        return (first.substr(0,2) < second.substr(0,2));
    }
};

compare c;

int main()
{
int cnt=0;
string str;
while(cin>>cnt&&cnt!=0)
{
	vector<string> sList;
	for(int i=0;i<cnt;i++)
	{
		cin >> str;
		sList.push_back(str);
	}
	stable_sort(sList.begin(), sList.end(), c);
	for (std::vector<string>::iterator it = sList.begin(); it != sList.end(); it++)
		std::cout << *it << endl;
	cout << endl;
}
return 0;
}