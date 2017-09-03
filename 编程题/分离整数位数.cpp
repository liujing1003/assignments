#include <iostream>

using namespace std;

int main()
{
    int i=0;
    cin>>i;
    int a=0,b=0,c=0,d=0;
    a=i/100;
    b=i-a*100;
    c=b/10;
    d=i-100*a-10*c;
    cout<<a<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}
