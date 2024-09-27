//Q3. Find the minimum value out of all elements in the array.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;

    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int minvalue=0;
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]<arr[j])  minvalue==arr[i];
        }
    }
    cout<<minvalue;

    
}
