#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	unsigned long int result = 0;
	int lastnum;
	unsigned long int num;
	string str;
	int cnt;
	cin >> cnt;
	for(int i=0;i<cnt;i++)
	{
		cin>>str;
		//cout << str<< " ";
		lastnum = atoi(str.substr(str.length()-1).c_str());
		num = atoi(str.substr(0,str.length()-1).c_str());
		//cout << num << " " <<  lastnum << " ";
		result += pow(num,lastnum);
	}
	cout << result;
	return 0;
}