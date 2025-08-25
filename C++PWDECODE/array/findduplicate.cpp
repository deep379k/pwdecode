//Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
     cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;i<=n-1;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
                break;
        }
    }
}
}