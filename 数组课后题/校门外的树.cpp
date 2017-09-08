#include <iostream>

using namespace std;

int main()
{
    int l=0;
    int m=0;
    int k[10000]={0};
    int i=0,j=0;
    int s=0;
    int a=0,b=0;
    cin>>l>>m;
    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        for(j=a;j<=b;j++)
        {
            k[j]=1;
        }
    }
    for(i=0;i<=l;i++)
    {
        if(k[i]==1)
            s++;
    }
    cout<<l+1-s<<endl;
    return 0;
}
