#include<iostream>
using namespace std;
int main(){
    int n=6;
    
   int arr[] = {1, 2, 3, 4, 5,6};   
    int sum = 0;
     //int length = sizeof(arr)/sizeof(arr[0]);  
    /*for(int i=0;i<=n-1;i++){
        cin>>n;
    }
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<endl;
    }*/
   for(int i=0;i<=n-1;i++){
      sum = sum + arr[i];
 }
 cout<<sum<<endl;
}