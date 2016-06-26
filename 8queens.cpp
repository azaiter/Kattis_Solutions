#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

bool checkdiag1(bool arr[][8], int i, int j)
{
    int i2,j2;
    i2=i;
    j2=j;
            i2++;
        j2++;
    while((i2>=0 && j2>=0) && (i2<8 && j2<8))
    {

        if(arr[i2][j2]==true)
        {
            return false;
            break;
        }
                i2++;
        j2++;
    }
    return true;
}
bool checkdiag2(bool arr[][8], int i, int j)
{
    int i2,j2;
    i2=i;
    j2=j;
            i2--;
        j2--;
    while((i2>=0 && j2>=0) && (i2<8 && j2<8))
    {

        if(arr[i2][j2]==true)
        {
            return false;
            break;
        }
                i2--;
        j2--;
    }
    return true;
}
bool checkdiag3(bool arr[][8], int i, int j)
{
    int i2,j2;
    i2=i;
    j2=j;
         i2--;
        j2++;
    while((i2>=0 && j2>=0) && (i2<8 && j2<8))
    {
   
        if(arr[i2][j2]==true)
        {
            return false;
            break;
        }
             i2--;
        j2++;
    }
    return true;
}
bool checkdiag4(bool arr[][8], int i, int j)
{
    int i2,j2;
    i2=i;
    j2=j;
            i2++;
        j2--;
    while((i2>=0 && j2>=0) && (i2<8 && j2<8))
    {

        if(arr[i2][j2]==true)
        {
            return false;
            break;
        }
                i2++;
        j2--;
    }
    return true;
}
bool checkdiag5(bool arr[][8], int i, int j)
{
    int i2,j2;
    i2=i;
    j2=j;
            i2++;
        //j2--;
    while((i2>=0 && j2>=0) && (i2<8 && j2<8))
    {

        if(arr[i2][j2]==true)
        {
            return false;
            break;
        }
                i2++;
        //j2--;
    }
    return true;
}
bool checkdiag6(bool arr[][8], int i, int j)
{
    int i2,j2;
    i2=i;
    j2=j;
            i2--;
        //j2--;
    while((i2>=0 && j2>=0) && (i2<8 && j2<8))
    {

        if(arr[i2][j2]==true)
        {
            return false;
            break;
        }
                i2--;
        //j2--;
    }
    return true;
}
bool checkdiag7(bool arr[][8], int i, int j)
{
    int i2,j2;
    i2=i;
    j2=j;
            //i2--;
        j2++;
    while((i2>=0 && j2>=0) && (i2<8 && j2<8))
    {

        if(arr[i2][j2]==true)
        {
            return false;
            break;
        }
                //i2--;
        j2++;
    }
    return true;
}
bool checkdiag8(bool arr[][8], int i, int j)
{
    int i2,j2;
    i2=i;
    j2=j;
            //i2--;
        j2--;
    while((i2>=0 && j2>=0) && (i2<8 && j2<8))
    {

        if(arr[i2][j2]==true)
        {
            return false;
            break;
        }
                //i2--;
        j2--;
    }
    return true;
}
int main() {
    bool table[8][8];
    char c;
    int count=0;
    string out="valid";
    memset (table,false,sizeof(table));
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            cin >> c;
            if(c=='*')
                table[i][j]=true;
        }
    }
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if(table[i][j]==true)
            {
            	count++;
                if(
                    checkdiag1(table, i, j) != true || 
                    checkdiag2(table, i, j) != true || 
                    checkdiag3(table, i, j) != true || 
                    checkdiag4(table, i, j) != true || 
                    checkdiag5(table, i, j) != true || 
                    checkdiag6(table, i, j) != true || 
                    checkdiag7(table, i, j) != true || 
                    checkdiag8(table, i, j) != true
                    )
                {
                    out = "invalid";
                }
            }
        }
    }
    if(count != 8)
    	cout << "invalid";
    else
    	cout << out;
    return 0;
}