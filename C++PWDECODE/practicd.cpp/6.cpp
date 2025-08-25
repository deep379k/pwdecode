#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter the size of vector"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int t;
    cout<<"enter the target"<<endl;
    cin>>t;
    int temp=0;
     for(int i=0;i<n;i++){
        temp=v[i];
        for(int j=i+1;j<n;j++){
            if(temp+v[j]==t){
                cout<<v[i]<<" "<<v[j]<<endl;
            }
        }
     }

}