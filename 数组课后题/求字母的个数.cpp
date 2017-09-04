#include <iostream>

using namespace std;

int main()
{
    char str[80];
    cin.getline(str,80);
    int numa=0,numb=0,numc=0,numd=0,nume=0;
    for(int i=0;str[i]!='\0';i++)
    {
    switch(str[i])
    {
        case 'a':numa++;break;
        case 'e':numb++;break;
        case 'i':numc++;break;
        case 'o':numd++;break;
        case 'u':nume++;break;
    }
    }
    cout<<numa<<" "<<numb<<" "<<numc<<" "<<numd<<" "<<nume<<endl;
    return 0;

}
