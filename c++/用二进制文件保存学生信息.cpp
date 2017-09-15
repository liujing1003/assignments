#include<iostream>
#include<cstring>
#include<fstream>
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
  ofstream outFile("students.dat",ios::out|ios::binary);
  while(cin>>s.szName>>s.age)
  {
    if(strcmp(s.szName,"exit")==0)
    break;
  outFile.write((char*)&s,sizeof(s));
  }
  outFile.close();
  return 0;
}
