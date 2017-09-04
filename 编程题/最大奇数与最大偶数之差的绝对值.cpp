#include<iostream>
using namespace std;
int main(){
int a[6];
int maxodd=1;
int mineven=100;
int odd=0;
int even=0;
int temp=0;
for(int i=0;i<6;i++) {
    cin>>a[i];}
for(int i=0;i<6;i++){
    if(a[i]%2==0){
        even=a[i];
        if (even<mineven){
            mineven=even;
           }
       }
    else {
        odd=a[i];
        if(odd>maxodd){
            maxodd=odd;
          }
    }
    if (maxodd>mineven){
        temp=maxodd-mineven;
    }
    else
        {temp=mineven-maxodd;
    }
    }
    cout<<temp<<endl;
    return 0;
}
