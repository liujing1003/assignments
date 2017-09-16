#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
  int x,y;
  cin>>x>>y;
  freopen("test.txt","w",stdout);  //将标准输出重定向到test.txt文件
  if(y==0)   //除数为0则输出错误信息
  cerr<<"error."<<endl;
  else
  cout<<x/y;
  return 0;
}
