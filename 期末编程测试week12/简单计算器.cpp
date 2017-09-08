#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0;
    char mark='a';
    cin>>a>>b;
    cin>>mark;
    switch (mark)
    {
        case '+':cout<<a+b<<endl;break;
        case '-':cout<<a-b<<endl;break;
        case '*':cout<<a*b<<endl;break;
        case '/':if (b!=0)
        {
            cout<<a/b<<endl;
        }
        if(b==0)
        {
            cout<<"Divided by zero!"<<endl;
        }
        break;
        default:cout<<"Invalid operator!"<<endl;break;
    }
    return 0;
}
