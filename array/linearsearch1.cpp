#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[] = {2,3,4,5,6,7};
    int x;
    cin>>x;
    cout<<"search element :"<<x<<"in given array"<<endl;
    for(int i=0;i<=n-1;i++ ){
        if(arr[i]==x){
         cout<<"element found at "<<i <<"index"<<endl;   
        }
    }
}