#include <iostream>

using namespace std;

int main()
{
    int money=0;
    int a=0,b=0,c=0,d=0,f=0,g=0;
    int s=0,ss=0,sss=0,ssss=0,sssss=0;
    cin>>money;
    a=money/100;
    s=money-100*a;
    b=s/50;
    ss=s-b*50;
    c=ss/20;
    sss=ss-20*c;
    d=sss/10;
    ssss=sss-d*10;
    f=ssss/5;
    sssss=ssss-f*5;
    g=sssss;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<f<<endl;
    cout<<g<<endl;
}
