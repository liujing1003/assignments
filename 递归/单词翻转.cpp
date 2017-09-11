#include <iostream>
#include <string>
using namespace std;
int main()
{
  char a[500],b[500];//定义数组a为输入的字符串，b为遇到空格之前的字符串存放的数组
  int k;
  cin.getline(a,500);//读入字符串
  int i=0,j=0;
  while(a[i]!='\0')//当读到终止符之前
  {
    if(a[i]!=' ')//如果没有遇到空格
    {
      b[j]=a[i];//就把读到的字符放到数组b中
      j++;
    }
    else//当读到空格了
    {
      for(k=j-1;k>=0;k--)//就把b中存放的字符倒序输出
      {
        cout<<b[k];
      }
      cout<<" ";//输完字符后加上空格，读到一个空格输出一个空格
      j=0;//把j清零重新存放下一个空格之前的字符
    }
    i++;
  }
  for(k=j-1;k>=0;k--)//当读取到终止字符时，即读到了最后一个单词，就把该单词倒序输出；
  {
    cout<<b[k];
  }
  cout<<"\n";//接着输出换行符
  return 0;
}
