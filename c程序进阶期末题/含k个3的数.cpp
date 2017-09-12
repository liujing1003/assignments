#include<iostream>
using namespace std;
int main() {
    int m, k;
    int weishu[] = { 10000,1000,100,10,1 };
    cin >> m >> k;
    int number=0;
    int temp=m;
    for (int i = 0; i < 5; i++) {
        if (temp / weishu[i] == 3)
            number++;
        temp = temp%weishu[i];
    }
    if (m % 19 == 0 && number == k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
