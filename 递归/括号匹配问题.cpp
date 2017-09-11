#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char c[140] = { };
    int i, j;
    int s = -1, e;
    while (cin.getline(c, 140))
    {
        cout<<c<<endl;
        int l = strlen(c);
        for (i = 0; i < l; i++)
        {
            if (c[i] != '(' && c[i] != ')')
                c[i] = ' ';
        }
        while (1)//一直循环直到遇到break
        {
            for (i = 0; i < l; i++)
            {
                if (c[i] == '(')
                    s = i;
                else if (c[i] == ')')
                {
                    e = i;
                    break;
                }
            }
            if (i == l)       //如果已经匹配完所有的)的情况，把所有的未匹配的(变成$。
            {
                for (j = 0 ; j < l ; j ++)
                {
                    if (c[j] == '(')
                        c[j] = '$';
                }
                break;
            }
            else if (s == -1)   //如果还有)那么，继续循环，，如果没有与)匹配的(,那么把该)变成?
            {
                c[e] = '?';
            }
            else             //如果有匹配的，那么把两者都变成空格。并且将s置为-1.
            {
                c[s] = ' ';
                c[e] = ' ';
                s = -1;
            }
        }
        cout<<c<<endl;
        s = -1;
    }
    return 0;
}
