#include <iostream>
#include <string>
using namespace std;

int main() {
	int cnt;
	string main = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
	string in;
	string ch;
	while(cin >> cnt >> in && cnt!=0)
	{
		for(unsigned int i=in.length();i>0;i--)
		{
		    ch = main.substr(main.find(in[i-1])+cnt);
			in[i] = ch[0];
			cout << in[i];
		}
		cout << endl;
	}
	return 0;
}