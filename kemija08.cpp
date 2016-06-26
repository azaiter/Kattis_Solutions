#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int b, c;
int main() {
	string a;
	getline(cin, a);
	b=a.length();
	for(c=0;c<b;c++){
		if(a[c]=='a' || a[c]=='e' || a[c]=='i' || a[c]=='o' || a[c]=='u' || a[c]=='A' || a[c]=='E' || a[c]=='I' || a[c]=='O' || a[c]=='U'){
			a[c+1]='_';
			a[c+2]='_';
		}
	}
	for(c=0;c<b;c++)
		if(a[c]!='_')
			cout << a[c];
			
	return 0;
}