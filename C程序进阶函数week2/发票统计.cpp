#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a[3][3] = {0};//定义了一个二维数组包含了三种发票三种ID共九类
    for (int i = 0; i < 3; i++)//排着对三个ID所报的发票进行统计
    {
        int ID;
        cin >> ID;
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            char l = 0;
            float price = 0;
            cin >> l >> price;//读入n张发票的信息
            switch(l)
            {
                case 'A':a[ID-1][0] += price;break;
                case 'B':a[ID-1][1] += price;break;
                case 'C':a[ID-1][2] += price;break;
                default:break;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << i+1 << " ";//输出ID
        cout << fixed << setprecision(2) << a[i][0]+a[i][1]+a[i][2] << endl;//输出该ID的总发票
    }
    for (int i = 0; i < 3; i++)
    {
        cout << (char)(i+65) << " ";//输出发票类型0是A,1是B，2是C
        cout << fixed << setprecision(2) << a[0][i]+a[1][i]+a[2][i] << endl;//输出三个ID每种发票的总数
    }
    return 0;
}
