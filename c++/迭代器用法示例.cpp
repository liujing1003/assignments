#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>v;//v是存放int类型变量的可变长数组，开始并没有元素
for(int n=0;n<5;++n)
v.push_back(n);//push_back成员函数在vector容器尾部添加一个元素
vector<int>::iterator i;//定义正向迭代器
for(i=v.begin();i!=v.end();++i)
{//用迭代器遍历容器
  cout<<*i<<" ";//*i就是迭代器i指向的元素
  *i*=2;//每个元素变为原来的2倍
}
cout<<endl;
//用返乡迭代器遍历容器
for(vector<int>::reverse_iterator j=v.rbegin();j!=v.rend();++j)
cout<<*j<<" ";
return 0;
}
