#include <iostream>
using namespace std;
void step(int a)
{
  if(a==1)
  {
    cout<<"End"<<endl;
  }
  else
  {
    if(a%2!=0)
    {
      int b=a;
      a=a*3+1;
      cout<<b<<"*3+1="<<a<<endl;
    }
    if(a%2==0)
    {
      int c=a;
      a=a/2;
      cout<<c<<"/2="<<a<<endl;
      step(a);
    }
  }
}
int main()
{
  int m=0;
  cin>>m;
  step(m);
  return 0;
}
