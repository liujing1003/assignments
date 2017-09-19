#include<iostream>
using namespace std;
class Base
{
public:
  int k;
  Base(int n):k(n){}//类型转换构造函数
};
class Big
{
public:
  int v;
  Base b;
  Big(int n):v(n),b(n){}//类型转换构造函数
  Big(const Big& a):v(a.v),b(a.b.k){}//拷贝构造函数
};
int main()
{
  Big a1(5);
  Big a2=a1;//调用拷贝构造函数
  cout<<a1.v<<","<<a1.b.k<<endl;
  cout<<a2.v<<","<<a2.b.k<<endl;
  return 0;
}
