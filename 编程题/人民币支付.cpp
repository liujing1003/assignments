#include <iostream>

using namespace std;

int main()
{
    int money=0;
    int a=0,b=0,c=0,d=0,f=0,g=0;
    int as=0,bs=0,cs=0,ds=0,fs=0;
    cin>>money;
    a=money/100;
    as=money-100*a;
    b=as/50;
    bs=as-b*50;
    c=bs/20;
    cs=bs-20*c;
    d=cs/10;
    ds=cs-d*10;
    f=ds/5;
    fs=ds-f*5;
    g=fs;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<f<<endl;
    cout<<g<<endl;
}
