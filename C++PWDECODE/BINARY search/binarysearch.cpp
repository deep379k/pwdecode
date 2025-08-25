#include <iostream>
using namespace std;

int main() {
    int arr[8] = {0, 1, 2, 3, 5, 7, 8, 9};
    int n = 8;
    int x;
    cout<<"enter the target" ;
    cin>>x;
    int l = 0;
    int h = n - 1;
    bool found = false;

    while (l <= h) {
        int mid = l + (h - l) / 2; 
        if (x == arr[mid]) {
            cout << "Element found: " << arr[mid] << endl;
            found = true;
            break; 
        }
        else if (arr[mid] < x) {
            l = mid + 1;
        } 
        else {
            h = mid - 1;
        }
    }

    if (!found) {
        cout << "Element not found" << endl;
    }
}
