
// Finding the sum of all subarray present in the given array

#include <iostream>
#include <vector>
using namespace std;

void sum(int arr[], int n) {

    int sum = 0;

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            sum += arr[j];
            cout << sum << endl;
        }
    }
}


int main() {

    int n;
    
    cout << "Enter size of the array: ";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++) {
        cout << "Enter element: ";
        cin >> arr[i];
    }

    sum(arr, n);

    return 0;

}