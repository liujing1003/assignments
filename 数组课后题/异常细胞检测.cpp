#include <iostream>
using namespace std;
int main()
{
int N=0;
cin>>N;
int num=0;
int i=0,j=0;
int a[102][102]={0};
for ( i=0;i<N;i++)
{
  for ( j=0;j<N;j++)
  {
    cin>>a[i][j];
  }
}
for ( i=1;i<N-1;i++)
{
  for ( j=1;j<N-1;j++)
  {
    int n1=a[i+1][j]-a[i][j];
    int n2=a[i-1][j]-a[i][j];
    int n3=a[i][j+1]-a[i][j];
    int n4=a[i][j-1]-a[i][j];
    if (n1>=50&&n2>=50&&n3>=50&&n4>=50)
    {
      num=num+1;
    }
  }
}
cout<<num<<endl;
return 0;
}
