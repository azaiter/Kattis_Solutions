#include <iostream>  
#include <stdio.h>  
#include <algorithm>  
#include <string.h>  
#include <queue>  
#include <stack>  
#include <iomanip>  
#include <cmath>  
using namespace std;  
  
int n;  
int s[12],t[12];  
  
int main()  
{  
    while(cin>>n&&n!=-1)  
    {  
        t[0]=0;  
        for(int i=1;i<=n;i++)  
            cin>>s[i]>>t[i];  
        int total=0;  
        for(int i=1;i<=n;i++)  
            total+=(t[i]-t[i-1])*s[i];  
        cout<<total<<" miles"<<endl;  
    }  
    return 0;  
}  