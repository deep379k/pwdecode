#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    cout<<"enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    vector<int> prefixsum(n);
    prefixsum[0] = nums[0];
    for (int i=1; i<=n-1;i++){
        prefixsum[i] = prefixsum[i-1] + nums[i];
    }
    cout<<"prefix sum array is: ";
    for(int i = 0; i < n; i++){
        cout<<prefixsum[i]<<" ";
    }
}
