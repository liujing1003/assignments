#include <iostream>
#include <cmath>
using namespace std;
class CShape       //基类：形体类
{
public:
  virtual double Area(){};   //求面积
  virtual void PrintInfo(){};   //显示信息
};
class CRectangle:public CShape     //派生类：矩形类
{
public:
  int w,h;            //宽度和高度
  virtual double Area();
  virtual void PrintInfo();
};
class CCircle:public CShape     //派生类：圆类
{
public:
  int r;            //半径
  virtual double Area();
  virtual void PrintInfo();
};
class CTriangle:public CShape          //派生类：三角形类
{
public:
  int a,b,c;                 //三条边的长度
  virtual double Area();
  virtual void PrintInfo();
};
double CRectangle::Area()
{
  return w*h;
}
void CRectangle::PrintInfo()
{
  cout<<"Rectangle:"<<Area()<<endl;
}
double CCircle::Area(){
  return 3.14*r*r;
}
void CCircle::PrintInfo()
{
  cout<<"Circle:"<<Area()<<endl;
}
double CTriangle::Area()    //根据海伦公式计算三角形面积
{
  double p=(a+b+c)/2.0;
  return sqrt(p*(p-a)*(p-b)*(p-c));
}
void CTriangle::PrintInfo()
{
  cout<<"Triangle:"<<Area()<<endl;
}
CShape* pShape[100];    //用来存放各种几何图形，假设不超过100个
int MyCompare(const void* s1,const void* s2)   //定义排序规则的函数
{
  CShape** p1=(CShape**)s1;   //s1是指向指针的指针，其指向的指针为CShape*类型
  CShape** p2=(CShape**)s2;
  double a1=(*p1)->Area();    //p1指向几何形体对象的指针，*p1才指向几何形体对象
  double a2=(*p2)->Area();
  if(a1<a2)
     return -1;            //面积小的排前面
     else if(a2<a1)
     return 1;
     else
     return 0;
}
int main()
{
  int i;int n;
  CRectangle* pr;CCircle* pc;CTriangle* pt;
  cin>>n;
  for(i=0;i<n;i++)
  {
    char c;
    cin>>c;
    switch(c)
    {
      case'R':               //矩形
      pr=new CRectangle();
      cin>>pr->w>>pr->h;
      pShapes[i]=pr;
      break;
      case'C':              //圆形
      pc=new CCircle();
      cin>>pc->r;
      pShapes[i]=pc;
      break;
      case'T':            //三角形
      pt=new CTriangle();
      cin>>pt->a>>pt->b>>pt->c;
      pShapes[i]=pt;
      break;
    }
  }
  qsort(pShapes,n,sizeof(CShape*),MyCompare);
  for(int i=0;i<n;i++)
  {
    pShapes[i]->PrintInfo();
    delete pShapes[i];            //释放空间
  }
  return 0;
}







error:
几何形体程序.cpp: In function ‘int main()’:
几何形体程序.cpp:83:7: error: ‘pShapes’ was not declared in this scope
       pShapes[i]=pr;
       ^
几何形体程序.cpp:97:9: error: ‘pShapes’ was not declared in this scope
   qsort(pShapes,n,sizeof(CShape*),MyCompare);
         ^
几何形体程序.cpp:97:44: error: ‘qsort’ was not declared in this scope
   qsort(pShapes,n,sizeof(CShape*),MyCompare);
                                            ^
