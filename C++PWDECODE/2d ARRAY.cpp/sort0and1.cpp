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
    int no0 = 0;
    int no1 = 0;
    for(int i=0;i<=n-1;i++){
        if(v[i]==0) no0++;
        else no1++;
    }
    cout<<"total no.of 0 present in vector is :"<<no0<<endl;
    cout<<"total no.of 0 present in vector is :"<<no1<<endl;


   for(int i=0;i<=n-1;i++){
    if(i<=no0) v[i]=0;
    else v[i]=1;
  }
  for(int i=0;i<=n-1;i++){
  cout<<v[i]<<" ";
  }
  cout<<endl;
  }