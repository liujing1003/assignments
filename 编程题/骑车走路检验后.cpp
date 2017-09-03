#include<iostream>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    float a[n];
    float w=0,b=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        w=a[i]/1.2;
        b=a[i]/3.0+27+23;
        if(w>b){
            cout<<"Bike"<<endl;
        }
        else if(w<b){
            cout<<"Walk"<<endl;
        }
        else {
            cout<<"All"<<endl;
        }
    }
    return 0;
}
