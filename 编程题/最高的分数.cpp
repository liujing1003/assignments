#include <iostream>

using namespace std;

int main()
{
    int n=0,a[100];
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<n-1;i++)
    {
        for (int j=1;j<n-1;j++)
        {
            if(a[j-1]<a[j])
            {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
        cout<<a[0]<<endl;
        return 0;
    }
}
