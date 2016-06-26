#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool cmp(string a,string b)
{
return a.length()<b.length();
}
int main(){
string s[20],temp;
int i,j,n,t=0;
while(cin>>n&&n){
t++;
for(i=0;i<n;i++)cin>>s[i];
sort(s,s+n,cmp);
cout<<"SET "<<t<<endl;
for(i=0;i<n;i++)if(i%2==0)cout<<s[i]<<endl;
for(i=n-1;i>=1;i--)if(i%2!=0)cout<<s[i]<<endl;
}
return 0;
}    