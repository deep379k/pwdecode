#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v;
    for(int i=0;i<v.size();i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    int min=v[0];
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size()-1;j++){
            if(v[i]>v[j])
        }
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}