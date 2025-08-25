#include<iostream>
#include<vector>
using namespace std;
int main(){
   int n;
    cout<<"enter the size of array";
    cin>>n;
    vector<int>v;
   for(int i=0;i<=n-1;i++){
    int q;
    cin>>q;
    v.push_back(q); 
   }
   for (int i = 0; i < n / 2; i++) {
        swap(v[i], v[n - 1 - i]);
    }
    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}