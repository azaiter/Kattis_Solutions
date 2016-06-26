#include<iostream>
using namespace std;

int main()
{
    int cnt,num,x;
    cin >> cnt;
    while(cnt--)
    {
      cin>>num;
      int max=0;
      int min=99;
      while(num--)
      {
          cin>>x;
          if(max<=x)
          {
              max=x;
          }
          if(min>=x)
          {
              min=x;
          }
      }
      int out=(max-min)*2;
       cout << out << endl;
    }
}
