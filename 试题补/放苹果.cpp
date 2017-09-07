#include<iostream>

using namespace std;

 int f(int m,int n)
 {
     if(m==0||n==1)
        return 1;
     if(m<n)
        return f(m,m);
     else
        return f(m,n-1)+f(m-n,n);
 }
 int main()
 {
     int apples,plates;
     int t=0;
     cin>>t;
     while(t--)
     {
     cin>>apples>>plates;
     cout<<f(apples,plates)<<endl;
     }
 }
