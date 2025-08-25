#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array: ";  
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int product = 1;
    for(int i = 0; i < n; i++){
        product = product * arr[i];
    }
    cout<<"the product of the array except itself is: ";
    for(int i = 0; i < n; i++){
        cout<<product/arr[i]<<" ";
    }   
    
}