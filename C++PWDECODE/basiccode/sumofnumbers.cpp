//WAP to print the sum of all the even digits of a given number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the number "<< endl;
    cin>>n;
    int sum=0;
    for(int i=2;i<=n;i++){
   if(i%2==0) cout<<i<<endl;
      sum+=i;
    }
    cout<<"sum of all even digits number is" << sum<<endl;
    
}

