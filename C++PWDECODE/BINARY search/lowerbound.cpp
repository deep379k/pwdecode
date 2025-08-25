#include<iostream>
using namespace std;
int main(){
     int arr[8] = { 0 , 1 , 2 , 3 ,4, 7 , 9 };
    int n = 7;
    int x;
    cout<<"enter the target" ;
    cin>>x;
    int l = 0;
    int h = n - 1;
    bool found = false;

     while (l <= h) {
        int mid = l + (h - l) / 2; 
        if (x == arr[mid]) {
            cout <<  arr[mid-1] << endl;
            found = true;
            break; 
        }
        else if (arr[mid] < x) {
            l = mid;
        } 
        else {
            h = mid - 1;
        }
    }

    if (!found) {
        cout << arr[h] << endl;
    }
}