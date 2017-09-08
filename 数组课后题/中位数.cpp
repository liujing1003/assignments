#include <iostream>

using namespace std;

int main()
{
    int N=0;
    int a[15000]={0};
    cin>>N;
    while(N!=0)
    {
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<N-1;i++)
        {

            for(int j=i+1;j<N;j++)
            {
                if(a[i]>a[j])
                {
                    int temp=a[i];
                       a[i]=a[j];
                       a[j]=temp;
                }
            }
        }

        if(N%2==0)
            cout<<(a[(N-1)/2]+a[((N-1)/2)+1])/2<<endl;
        if(N%2!=0)
            cout<<(a[N/2])<<endl;
        cin>>N;
        }

    return 0;
}
