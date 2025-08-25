#include<iostream>
using namespace std;
int main(){
     int arr[3][3];
     cout<<"enter the first matrix"<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
     }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
     }
      cout<<"enter the second matrices"<<endl;
     
     for(int k=0;k<3;k++){
        for(int l=0;l<3;l++){
            cin>>arr[k][l];
        }
     }
     for(int k=0;k<3;k++){
        for(int l=0;l<3;l++){
            cout<<arr[k][l];
        }
        cout<<endl;
     }
      
     
      for(int a=0;a<3;a++){
        for(int b=0;b<3;b++){
            cout<<arr[i][j]+arr[k][l];
        }
        cout<<endl;
     }
}