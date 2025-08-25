#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> v1;
    for(int i=0;i<n;i++){
        for(int j=v.size()-1;j>=0;j++){
            if (i+j==n-1){
                v1.push_back(v[j]);
            }
        }
    }
    cout<<"The new vector is: ";
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }

}