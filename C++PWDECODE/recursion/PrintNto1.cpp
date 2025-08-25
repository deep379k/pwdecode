// #include<iostream>
// using namespace std;
// int number(int n){
// for(int i=1;i<=n;i++){
//     cout<<i<<endl;
// }
// }
// int main(){
//      number(6);
// }



#include<iostream>
using namespace std;
void number(int n){
if(n==0) return;
cout<<n<<endl;
number(n-1);
}
int main(){
     number(6);
}
