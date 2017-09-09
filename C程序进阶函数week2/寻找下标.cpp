#include <iostream>
using namespace std;
int main()
{
  int n=0;
  int a[100]={0};
  cin>>n;
  for (int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  bool flag=true;
  for(int i=0;i<n;i++)
  {
    if(a[i]==i)
    {
      flag=false;
      cout<<a[i]<<endl;
      break;
    }
  }
  while(flag)
  {
  cout<<"N"<<endl;
  return 0;
  }
  return 0;
}
