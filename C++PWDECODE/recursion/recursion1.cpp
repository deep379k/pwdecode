#include<iostream>
using namespace std;
void greeting(int n){
    if (n == 0) return;
    else cout<< "good morning everyone"<<endl;
    greeting(n - 1);
    cout << endl;
}
int main(){
  int n;
  cin >>n ;
  greeting(n);

}