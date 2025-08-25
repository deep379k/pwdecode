#include<iostream>
using namespace std;

int calculation(int a, int b, int &sum, int &multiply , int &subtraction) {
     sum = a + b;
     multiply = a * b;
     subtraction = a - b; 
}
int main() {
    int sum;
    int multiply;
    int subtraction;
    calculation(3, 4,sum,multiply,subtraction);
    cout << sum<<" " <<multiply<<" "<<subtraction;
}
