#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the no.of rows :";
    cin>>n;
    cout<<endl;
    cout<<"enter the no.of column:";
    cin>>m;
    cout<<endl;
    int array[n][m];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>array[i][j];
        }
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<array[i][j]<<" ";
        }
    }
  cout<<endl;


}