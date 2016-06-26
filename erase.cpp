#include <iostream>
#include <string>
using namespace std;

int main() {
	int cnt;
	string str1;
	string str2;
	string out="Deletion succeeded";
	cin >> cnt >> str1 >> str2;
	if(cnt%2 == 1)
	{
		for(int i=0;i<str1.length();i++)
		{
			if(str1[i]==str2[i])
				out = "Deletion failed";
		}
	}
	else
	{
		for(int i=0;i<str1.length();i++)
		{
			if(str1[i]!=str2[i])
				out = "Deletion failed";
		}
	}
	cout << out;
	return 0;
}