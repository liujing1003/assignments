#include <iostream>
using namespace std;
char man;//定义了代表男生的字符
int founction(char str[], int s)//将str，1copy一份赋给形参str[],和s
{
    int n;//定义一个整型变量
    if (str[s] != man)//如果读入的字符不是man
    {
        return s;//传递返回值s即1给main函数，main函数输出0 1即编号为0的男孩和编号为1的女孩手拉手离开
    }
    else//如果读入的字符是man
    {
        n = founction(str, s + 1);//再次调用founction函数，并且s+1
        cout << s << ' ' << n << endl;
        return founction(str, n + 1);
    }
}
int main()
{
    char str[101] = { 0 };//定义了一个字符串数组
    cin >> str;//输入字符串
    man = str[0];//将第一个字符串赋给man
    int n = founction(str, 1);//定义整型变量n为founction函数的返回值，调用founction函数
    cout << "0 " << n << endl;
    return 0;
}
