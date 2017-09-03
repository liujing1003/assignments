#include<iostream>
using namespace std;
int main()
{
    int n=0,x=0,y=0,i=0,j=0;
    cin>>n>>x>>y;
    j=y%x;
    if (j==0)
    {
        i=y/x;
    }
    else
    {
        i=y/x+1;
    }
    if(n-i>0)
    {
        cout<<n-i<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}
