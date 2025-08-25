// 97562 count =5
//9+7+5+6+2 =29
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the number "<< endl;
    cin>>n;
    int lastdig=0;
     int sum=0;
     int count=0;
     while(n>0){
        lastdig= n%10;
        sum+=lastdig;
        n/=10;
        count++;
     }
     cout << "sum of digits is "<< sum<< endl;
     cout << "total number is" << count  << endl;

}
