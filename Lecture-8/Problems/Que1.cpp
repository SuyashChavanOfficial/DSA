
// Finding the Maximum no. of ith iteration

#include <iostream>
#include <vector>
using namespace std;

void max(int arr[], int n) {

    int maxNo = INT_MIN;
    for(int i=0; i<n; i++) {
        maxNo = max(maxNo, arr[i]);
        cout << "Max no. of iteration " << i << " is: " << maxNo << endl;
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

    max(arr, n);

    return 0;

}