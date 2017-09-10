#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str1[80];
    char str2[80];
    cin.getline(str1,80);
    cin.getline(str2,80);
    int n=0;
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]>='A'&&str1[i]<='Z')
            str1[i]=str1[i]+32;
    }
    for(int i=0;str2[i]!='\0';i++)
    {
        if(str2[i]>='A'&&str2[i]<='Z')
            str2[i]=str2[i]+32;
    }
    n=strcmp(str1,str2);
    if(n<0)
        cout<<"<"<<endl;
    if(n>0)
        cout<<">"<<endl;
    if(n==0)
        cout<<"="<<endl;
}
