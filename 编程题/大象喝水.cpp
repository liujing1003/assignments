#include <iostream>

using namespace std;

int main()
{
    int n=0,h=0,r=0;
    float v=0,k=0;
    cin>>h>>r;
    v=h*3.1415926*r*r;
    k=20000/v;
    if(k-int(k)==0)
    {
        n=k;
    }
    else
    {
        n=k+1;
    }
    cout<<n<<endl;
    return 0;
}
