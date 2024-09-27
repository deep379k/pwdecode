#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
   
    
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if(i==1||j==1 || i==n || j==n) cout<<"*";
            //else if (i==n|| j==n) cout<<"*";
            else if (i==j || (i+j)%2==0) cout<<"*";

            else cout<<" ";
             
        }
        cout<<endl;
    }

}