//find the maximum value out of all the elements in the array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>array = {2,5,3,8,92};
    int maxelement = array[0];
    for(int i=0;i<=array.size()-1;i++){
      if(maxelement<array[i]) maxelement = array[i];
    }
    cout<<maxelement;
}
