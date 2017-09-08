#include <iostream>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int a[500]={0};
  for(int i=0;i<m;i++)
  {
    a[i]=0;
  }
  for(int i=m;i<m+n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<m;i++)
  {
    a[i]=a[n+i];
  }
  for(int i=0;i<n;i++)
  {
  cout<<a[i]<<" ";
  }
  return 0;
}
