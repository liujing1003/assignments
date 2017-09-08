#include <iostream>

using namespace std;

int main()
{
    char str[14]={0},substr[4]={0};
    while (cin>>str>>substr)
    {
        int i=0,iBiggest=0;
        char strBiggest=0;
        while(str[i])//扫描并打印字符串的意思
        {
            if (str[i]>strBiggest)
            {
                iBiggest=i;
                strBiggest=str[i];
            }
            i++;
        }
        for(int j=10;j>iBiggest;j--)//str不超过10个字符，对于所有字符中位于iBiggest后面的字符都向后移三位
        {
            str[j+3]=str[j];
        }
        str[iBiggest+1]=substr[0];
        str[iBiggest+2]=substr[1];
        str[iBiggest+3]=substr[2];
        cout<<str<<endl;
    }
    return 0;
}
