#include <iostream>

using namespace std;

int main()
{
    int n=0,temp=0;
    int k=0;
    cin>>n>>k;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<a[k-1]<<endl;
    return 0;
}

