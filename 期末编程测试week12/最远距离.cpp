#include <iostream>

#include <iomanip>

#include <vector>

#include <math.h>

using namespace std;

int main()
{

    int n=0;
    cin>>n;
    vector<float> x(n,0),y(n,0);//声明了两个float型数组大小没有指定
    float dis=0,disbiggest=0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            dis=sqrt ((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
                     if(dis>disbiggest)
                     {
                         disbiggest=dis;
                     }
        }
    }
    cout<<fixed<<setprecision(4)<<disbiggest<<endl;
    return 0;

}
