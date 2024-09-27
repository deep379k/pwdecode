#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"enter the number";
    cin>>x>>y;
    int* ptr1=&x;
    int* ptr2=&y;
    cout<<(*ptr1 + *ptr2)<<endl;
    cout<<(x + y)<<endl;


}