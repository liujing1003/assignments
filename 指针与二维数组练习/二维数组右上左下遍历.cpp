#include<iostream>
using namespace std;
int main(){
    int n,m,i,j,a[100][100];
    cin>>n>>m;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>a[i][j];
    for(i=0;i<=n+m-2;i++){//总共n+m-1条对角线
        for(j=i;j>=0;j--){
            if(j<m&&i-j<n){
                cout<<a[i-j][j]<<endl;
            }
        }
    }
    return 0;
}
