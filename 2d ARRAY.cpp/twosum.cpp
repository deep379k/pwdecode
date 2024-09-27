#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"enter the size of array"<<n;
    int x;
    cin>>x;
    cout<<"find the elemnt:"<<x<<endl;;
    vector<int>v;
   for(int i=0;i<=n-1;i++){
    int q;
    cin>>q;
    v.push_back(q); 
   }
   for(int i=0;i<=n-1;i++){
    for(int j=1;j<=n-1;j++){
        if(v[i]+v[j]==x){
            cout<<"("<<v[i]<<","<<v[j]<<")"<<endl;
        }
    }
   }
}