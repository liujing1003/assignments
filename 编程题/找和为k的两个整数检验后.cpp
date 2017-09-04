#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int k=0;
    int m=0;
    cin>>n>>k;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            m=a[i]+a[j];
            if(m==k)
            {
              break;
            }
        }
        if(m==k)
            break;
    }
    if (m==k)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }

    return 0;
}
