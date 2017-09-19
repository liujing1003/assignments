#include<iostream>
using namespace std;
class A
{
public:
  int val;
  A(int n=0)
  {
    val=n;
  }
  int& GetObj()
  {
    return val;//返回val的引用，GetObj和val等价
  }
};
int main()
{
  A a;
  cout<<a.val<<endl;
  a.GetObj()=5;
  cout<<a.val<<endl;
}
