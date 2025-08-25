#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int b;
    cin>>b;
     for(int i=1;i<=b;i++){
        int x;
        cin>>x;
        v.push_back(x);
     }
     for(int i=0;i<5;i++){
        cout<<v.at(i)<<" ";
     }
     cout<<endl;
    
}