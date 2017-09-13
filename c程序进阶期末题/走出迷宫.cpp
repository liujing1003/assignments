#include<iostream>
#include<cstdlib>
using namespace std;
int ax[4]={0,0,1,-1},ay[4]={1,-1,0,0},a,b,c,d,i,j,n,m;
char mg[101][101];
int print(int p)
{
  cout<<p<<endl;
  exit(0);
}
int ss()
{
  int head=0,tail=1,x,y,f[100*100][4];
  f[tail][1]=a;
  f[tail][2]=b;
  f[tail][3]=1;
  mg[a][b]='#';
  do{
    head++;
    for(i=0;i<4;++i)
    {
      x=f[head][1]+ax[i];
      y=f[head][2]+ay[i];
      if(x>=0&&x<m&&y>=0&&y<n&&mg[x][y]=='.')
      {
        tail++;
        f[tail][1]=x;
        f[tail][2]=y;
        f[tail][3]=f[head][3]+1;
        mg[x][y]='#';
        if(x==c&&y==d)
        {
          print(f[head][3]);
          break;
        }
      }
    }
  }while(head<tail);
}
int main()
{
  cin>>n>>m;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      cin>>mg[i][j];
      if(mg[i][j]=='S')
      {
        a=i;
        b=j;
        mg[i][j]='.';
      }
      if(mg[i][j]=='T')
      {
        c=i;
        d=j;
        mg[i][j]='.';
      }
    }
  }
  ss();
  return 0;
}
