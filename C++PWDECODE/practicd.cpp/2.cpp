#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int element[n];
    for(int i=0;i<=n-1;i++){
        cin>>element[i];
    }
    cout<<"list of elments is :";
    for(int i=0;i<=n-1;i++){
        cout<<element[i]<<" ";
    }
    int k;
    cin>>k;
    cout<<"search element in list less than:"<<k<<endl;;
    for(int i =0;i<=n-1;i++){
        if(element[i]<k){
             cout<<element[i]<<" ";
        }
    }
    

}