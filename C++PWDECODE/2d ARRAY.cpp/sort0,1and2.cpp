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
     v.push_back(2);
     v.push_back(1);
     v.push_back(2);
     v.push_back(1);
     v.push_back(1);
     v.push_back(2);
    for(int i =0; i<=n-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int no0=0;
    int no1=0;
    int no2=0;
    for(int i=0;i<=n-1;i++){
       if(v[i]==0 ) no0++;
       else if (v[i]==1) no1++;
       else no2++;
    }
    cout<<"no of 0 is :"<<no0<<endl;
    cout<<"no of 1 is :"<<no1<<endl;
    cout<<"no of 2 is :"<<no2<<endl;
    for(int i=0;i<=n-1;i++){
        if(i<no0) v[i]=0;
        else if(i<(no0+no1)) v[i]=1;
        else v[i] =2;
    }
    cout<<"sorted array is :"<<" ";
    for(int i=0;i<=n-1;i++){
        cout<<v[i]<<" ";
    }
}