#include<iostream>
using namespace std;
int main (){
    int n;
    cout <<"enter the number";
    cin>>n;
     for (int i=1 ;i<=n-1;i++){
        if(i%2!=0){
            cout<<i<<" is odd number" << endl;
        }
     }
}