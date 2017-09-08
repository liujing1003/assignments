#include <iostream>

using namespace std;

int sum(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 1;
    else
        return(sum(n-1)+sum(n-2));
}

int main()
{
    cout<<sum(6)<<endl;
    return 0;
}
