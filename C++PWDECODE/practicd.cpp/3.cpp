//Find the second largest element in the given  Array.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    } 
    int max=arr[0];
    for(int i=0;i<n-1;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"the largest element is:"<<max<<endl;
    int min=arr[0];
    for(int i=0;i<n-1;i++){
        if(arr[i]!=max && arr[i]>min){
            min=arr[i];

        }
    }
    cout << "The second largest element is: " << min << endl;
}