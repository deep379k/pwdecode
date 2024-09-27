//give array of marks of student ,if marks of any student is less than 35 ,then print its roll number.
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int marks[n];
    for(int i =0;i<n-1;i++){
        cin>>marks[i];
    }
    for(int i=0;i<n-1;i++){
        cout<<"the marks of student is :"<<marks[i]<<endl;
    } 
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35){
            cout<<"the roll no "<<i<<" "<<endl;
        }
    }
}