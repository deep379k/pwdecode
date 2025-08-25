#include<iostream>
using namespace std;
void power(int a,int b){
    int product=1; 
    for(int i=0;i<=b;i++){
    product *= a;
}
    cout<<product<<endl;
}
int main(){
    int a;
    cout<<"enter the number";
    cin>>a;
    int b;
    cout<<"enter the exponent";
    cin>>b;
    power(a,b);
}