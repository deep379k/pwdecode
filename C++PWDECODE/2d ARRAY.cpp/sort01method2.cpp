#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
     cout<<"enter the size of array :"<<" ";
     cin>>n;
     vector<int>v;
     v.push_back(0);
     v.push_back(1);
     v.push_back(0);
     v.push_back(1);
     v.push_back(1);
     v.push_back(1);
    for(int i =0; i<=n-1;i++){
        cout<<v[i]<<" ";
    }
   cout<<endl;
   for(int i=0;i<=n-1;i++){
    for(int j=i+1;j<=n-1;j++){
        if(v[i]==1 || v[j]==0) swap(v[i],v[j]);
    }
   }
   for(int i=0;i<=n-1;i++){
  cout<<v[i]<<" ";
  }
  cout<<endl;
}
