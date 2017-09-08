#include <iostream>

using namespace std;

int main()
{
    int n=0;
    while(cin>>n)
    {
        if(n%3==0)
        {
            if(n%5==0)
            {
                if(n%7==0)
                {
                    cout<<"3 5 7"<<endl;
                }
                if(n%7!=0)
                {
                    cout<<"3 5"<<endl;
                }
            }
            if(n%5!=0)
            {
                if(n%7==0)
                {
                    cout<<"3 7"<<endl;
                }
                if(n%7!=0)
                {
                    cout<<"3"<<endl;
                }
            }
        }
        if(n%3!=0)
        {
            if(n%5==0)
            {
                if(n%7==0)
                {
                    cout<<"5 7"<<endl;
                }
                if(n%7!=0)
                {
                    cout<<"5"<<endl;
                }
            }
            if(n%5!=0)
            {
                if(n%7==0)
                {
                    cout<<"7"<<endl;
                }
                if(n%7!=0)
                {
                    cout<<"n"<<endl;
                }
            }
        }

    }
    return 0;
}
