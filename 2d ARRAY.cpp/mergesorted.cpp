#include<iostream>
#include<vector>
using namespace std;
int main(){
     int n;
    cout<<"enter the size of array";
    cin>>n;
      vector<int>v1;
      vector<int>v2;
      
      //CREATE VECTOR 1
    for(int i=0;i<n-1;i++){
    int q;
    cin>>q;
    v1.push_back(q); 
   }

   //CREATE VECTOR 2
   for(int i=0;i<n-1;i++){
    int r;
    cin>>r;
    v2.push_back(r); 
   }

   //CREARE A MERGE ARRAY
   vector<int>merge;

   //PUSH VECTOR 1 IN MERGE VECTOR
   for(int i=0;i<v1.size();i++){
    merge.push_back(v1[i]);
   }

   //PUSH VECTOR2 IN MERGE ARRAY
   for(int i =0;i<v2.size();i++){
    merge.push_back(v2[i]);
   }
   
   //FINALLY SORTED THE MERGE ARRAY
    for(int i=0;i<merge.size();i++){
    for(int j=i+1;j<merge.size();j++){
      if(merge[i]>merge[j]) {
        swap(merge[i],merge[j]);
      }
    }
    }
    
    //PRINT THE MERGE VECTOR
   for(int i =0;i<merge.size();i++){
    cout<<merge[i];
   }
}
