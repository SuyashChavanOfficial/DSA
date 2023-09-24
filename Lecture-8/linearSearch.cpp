#include <iostream>
#include <vector>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    
    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }

    return -1;

    // Time complexity will O(n) because we are traversing loop for n number of times
}

int main() {

    int n, key;
    
    cout << "Enter size of the array: ";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++) {
        cout << "Enter array element: ";
        cin >> arr[i]; 
    }

    cout << "Enter key to search in array: ";
    cin >> key;

    int val = linearSearch(arr, n , key);

    if(val == -1) {
        cout << "Element not found!";
    } else {
        cout << "Element found at position: " << val << endl;
    }
    
    return 0;
}