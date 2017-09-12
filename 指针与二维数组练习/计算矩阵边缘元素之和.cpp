#include <iostream>
using namespace std;
int main()
{
  int k=0;
  cin>>k;
  for(int i=0;i<k;i++)
  {
    int m=0,n=0;
    cin>>m>>n;
    int a[100][100];
    int sum = 0;
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>a[i][j];
      if(i==0||i==m-1)
      {
        sum+=a[i][j];
      }
      else if(j==0||j==n-1)
      {
        sum+=a[i][j];
      }
}
}

  cout<<sum<<endl;
}
return 0;
}
