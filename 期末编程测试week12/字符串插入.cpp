#include <iostream>

using namespace std;

int main()
{
    char str[14]={0},substr[4]={0};
    while (cin>>str>>substr)
    {
        int i=0,iBiggest=0;
        char strBiggest=0;
        while(str[i])//ɨ�貢��ӡ�ַ�������˼
        {
            if (str[i]>strBiggest)
            {
                iBiggest=i;
                strBiggest=str[i];
            }
            i++;
        }
        for(int j=10;j>iBiggest;j--)//str������10���ַ������������ַ���λ��iBiggest������ַ����������λ
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
