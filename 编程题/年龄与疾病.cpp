#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n=0;
    int i=0;
    cin>>n;
    double a[n];
    double pf=0,ps=0,pt=0,pl=0;
    double f=0,s=0,t=0,l=0;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i]>=1&&a[i]<=18)
        {
            f++;
        }
        if(a[i]>=19&&a[i]<=35)
        {
            s++;
        }
        if(a[i]>=36&&a[i]<=60)
        {
            t++;
        }
        if(a[i]>60)
        {
            l++;
        }
    }
    if(i==n)
    {
        pf=f/n;
        ps=s/n;
        pt=t/n;
        pl=l/n;
        cout.setf(ios::fixed);
        cout<<"1-18: "<< setprecision(2)<<pf*100<<"%"<<endl;
        cout<<"19-35: "<< setprecision(2)<<ps*100<<"%"<<endl;
        cout<<"36-60: "<< setprecision(2)<<pt*100<<"%"<<endl;
        cout<<"60-: "<< setprecision(2)<<pl*100<<"%"<<endl;
    }
    return 0;
}
