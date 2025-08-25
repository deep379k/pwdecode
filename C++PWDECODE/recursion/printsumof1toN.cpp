#include<iostream>
using namespace std;
void num(int sum,int n){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    num(sum+n,n-1);
}
int main(){
   num(1,7);
}