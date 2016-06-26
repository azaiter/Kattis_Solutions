#include <iostream>
#include <string>
using namespace std;
int main()
{
char in;
int cnt = 0;
int pos=1;
cin.get(in);
while(in != '\n')
{
if(pos%3 == 1)
{
    if (in != 'P')
        cnt += 1;
}

if(pos%3 == 2)
{
    if (in != 'E')
        cnt += 1;
}

if(pos%3 == 0)
{
    if (in != 'R')
        cnt += 1;
}
pos += 1;
cin.get(in);
}
cout << cnt;
return 0;
}
