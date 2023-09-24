#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[], int n, int key) {
     
    int s=0, e=n;

    while(s<=n) {
        int mid=(s+e)/2;

        if(arr[mid] == key) {
            return mid;
        } else if(arr[mid] > key) {
            e=mid-1;
        } else {
            s=mid+1;
        }
    }

    return -1;
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

    int val = binarySearch(arr, n, key);

    if(val == -1) {
        cout << "Element not found!";
    } else {
        cout << "Element found at position: " << val << endl;
    }
    
    return 0;
}