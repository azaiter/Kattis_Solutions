#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <string>
using namespace std;

unsigned int change(unsigned int n, unsigned int row_len)
{
    unsigned int input_row = n / row_len;
    unsigned int input_col = n % row_len;
    unsigned int output_row = row_len - input_col - 1;
    unsigned int output_col = input_row;
    return output_row * row_len + output_col;
}

int main()
{
    unsigned int num;
	cin >> num;

    int i;
    for(i = 0; i < num; ++i)
    {
        char in_buff[10001];
        scanf("%s", in_buff);
        unsigned int in_len = strlen(in_buff);
        char out_buff[in_len+1];

        unsigned int row_len = (int)floor(sqrt(in_len));
        int j;
        for(j = 0; j < in_len; ++j)
        {
            out_buff[change(j, row_len)] = in_buff[j];
        }

        out_buff[in_len] = 0;
        cout << out_buff << endl;
    }

    return 0;
}