#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter the number";
    cin>> n;
    int product=1;
    for(int i=1;i<=5;i++){
        product*=i;
    }
    cout<<product;
}