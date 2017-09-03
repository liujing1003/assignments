#include<iostream>
using namespace std;
int main(){
    float price=200;
    int N=0;
    int i=0;
    int money=0;
    int k=0;
    cin>>N>>k;
    money=N;
    for ( i=1;i<=20;i++)
    {
        if (money>=price)
        {
            cout<<i<<endl;
            break;
        }
        if (money<price)
        {
            price=price*(1+0.01*k);
            money= money+N;
        }

    }
    if (i>20)
    {
    cout<<"Impossible"<<endl;
    }
    return 0;
}
