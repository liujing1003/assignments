#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
using namespace std;
int main()
{
    string str;
    char dummy;
    cin >> dummy >> dummy;
    cin >> str;
    double str1=0;
    for(int i=0;i<str.size();i++)
    {
        int m=-(i+1);
        str[i]=str[i]-'0';
        str1=str1+str[i]*pow(8,m);
        str[i]=str[i]+'0';
    }
    cout<<setprecision(42);
    cout<<"0."<<str<<" [8] = "<<str1<<" [10]"<<endl;
     return 0;
}
