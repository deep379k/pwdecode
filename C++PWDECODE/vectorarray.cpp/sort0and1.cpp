#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<< endl;
}
void sort01(vector<int>& v){
    int noz=0;
    int no1=0; 
    int j=v.size();
     for(int i=0;i<j;i++){
        if(v[i]==0) noz++;
        else no1++;
    }
    for(int i=0;i<j;i++){
    if(i<noz) v[i]=0;
    else v[i]=1;
    }
}
int main(){
    vector<int>v;
    cout<<"enter the size ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
     display(v);
    sort01(v);
    display(v);

}