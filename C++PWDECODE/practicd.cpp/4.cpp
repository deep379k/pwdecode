//Count the number of elements in given array greater than a given number x.
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            count++;
        }
    }
    cout << "Number of elements greater than " << x << " are: " << count << endl;
}                                                                  