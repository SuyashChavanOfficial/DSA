
// Find all the possible subarrays of a given array

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter size of the array: ";
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++) {
        cout << "Enter element: ";
        cin >> a[i];
    }

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            for(int k=i; k<=j; k++) {
                cout << a[k] <<  " ";
            }
            cout << endl;
        }
    }

    return 0;
}