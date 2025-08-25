#include<iostream>
using namespace std;
int main(){
    int nums;
    cout<<"enter the size of the array: ";
    cin>>nums;  
    int arr[nums];
    cout<<"enter the elements of the array: ";      
    for(int i = 0; i < nums; i++){
        cin>>arr[i];
    }
    cout<<"enter the index to find the sum: ";
    int a,b;
    cin>>a >>b;
    for(int i = 1; i<nums;i++){
        arr[i] += arr[i-1];
    };
    cout<<"The sum of the elements from index "<<a<<" to "<<b<<" is: ";
    cout<<arr[b] - arr[a-1]<<endl;

}