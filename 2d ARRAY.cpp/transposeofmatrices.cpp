#include<iostream>
using namespace std;
int main(){
      int m;
      cout<<" enter the number of rows and columns";
      cin>>m;
      int arr[m][m];
      for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
               cin>>arr[i][j];
        }
      }
       for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
               cout<<arr[i][j];
        }
        cout<<endl;
      }
    //To print the transpose of element 
    cout<<"here is the transpose of above matrices"<<endl;;

    for(int j=0;j<m;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

      
} 