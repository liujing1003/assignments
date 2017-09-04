#include <iostream>

using namespace std;

int main()
{
    int n=0,a[100];
    cin>>n;
    int max=0;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<max<<endl;
    return 0;
}
