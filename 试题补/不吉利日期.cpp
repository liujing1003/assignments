#include <iostream>

using namespace std;

int main()
{
    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int w=0;
    cin>>w;
    for(int i=1;i<=12;i++)
    {
        for(int j=1;j<=month[i];j++)
        {
            if(j==13&&w==5)
            {
                cout<<i<<endl;
            }

                w=w+1;
                if(w>7)  w=1;
         }
    }
    return 0;
}
