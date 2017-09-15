#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class CStudent
{
public:
  char szName[20];
  int age;
};
int main()
{
  CStudent s;
  fstream iofile("students.dat",ios::in|ios::out|ios::binary);
  if(!iofile)
  {
    cout<<"error";
    return 0;
  }
  iofile.seekp(2*sizeof(s),ios::beg);//定位写指针到第三个记录
  iofile.write("Mike",strlen("Mike")+1);
  iofile.seekg(0,ios::beg);//定位读指针到开头
  while(iofile.read((char*)&s,sizeof(s)))
  cout<<s.szName<<" "<<s.age<<endl;
  iofile.close();
  return 0;
}
