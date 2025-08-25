#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int x,y;
    cin>>x>>y;
    int i=0;
    int j=n-1;
    while(i<j){
        if(i==x && j==y){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
        else if(i!=x){
            i++;
        }
        else if(j!=y){
            j--;
        }
    }
        cout<<"The new vector is: ";    
        for(int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        

    
}
