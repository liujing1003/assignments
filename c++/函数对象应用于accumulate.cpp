#include<iostream>
#include<vector>
#include<numeric>//accumulate在此头文件中定义
using namespace std;
template<class T>
void PrintInterval(T first,T last)
{//输出区间[first,last)中的元素
  for(;first!=last;++first)
  cout<<*first<<" ";
  cout<<endl;
}
int SumSquares(int total,int value)
{
  return total+value*value;
}
template<class T>
class SumPowers
{
private:
  int power;
public:
  SumPowers(int p):power(p){}
  const T operator()(const T&total,const T&value)
  {//计算value的power次方，加到total上
    T v=value;
    for(int i=0;i<power-1;++i)
    v=v*value;
    return total+v;
  }
};
int main()
{
  const int SIZE=10;
  int a1[]={1,2,3,4,5,6,7,8,9,10};
  vector<int>v(a1,a1+SIZE);
  cout<<"1)";PrintInterval(v.begin(),v.end());
  int result=accumulate(v.begin(),v.end(),0,SumSquares);
  cout<<"2)平方和:"<<result<<endl;
  result=accumulate(v.begin(),v.end(),0,SumPowers<int>(3));
  cout<<"3)立方和:"<<result<<endl;
  result=accumulate(v.begin(),v.end(),0,SumPowers<int>(4));
  cout<<"4)4次方和:"<<result;
  return 0;
}
