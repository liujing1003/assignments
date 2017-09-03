#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cin >>n;
    for(int i=10;i<n;i++)
    {
            int a=0,b=0;
            int h=0;
            a=i/10;
            b=i-a*10;
            h=a+b;
            if(i%h==0)
            {
                cout<<i<<endl;
            }
    }
    return 0;
}
