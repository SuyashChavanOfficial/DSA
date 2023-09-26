
// Isyana is given the number of visitors at her local theme park on N consecutive days. The
// no. of visitors on i-th day is Vi. A day is recork-breaking, if it satisfies both of the
// following conditions:
// • The number of visitors on the day is strictly larger than the number of visitors on each
// of the previous days.
// • Either it is the last day, or the number of visitors on the day is strictly larger than the
// number of visitors on the following day.
// Note that the very first day could be a record breaking day!

// Please help Isyana find out the number of record breaking days.

#include <iostream>
#include <vector>
using namespace std;

int record(int a[], int n) {

    // If there is only one day, it is a record-breaking day by definition
    if(n == 1) {
        cout << "Record-Breaking day is 1" << endl;
        return 0;
    }

    int ans = 0;        // Initialize the count of record-breaking days to zero
    int mx = INT_MIN;   // Initialize the maximum visitors seen so far to a small value
    
    // Check if the current day's visitors count is greater than the previous maximum
    // and also greater than the visitors count of the following day (or end of array)
    for(int i=0; i<n; i++) {
        if(a[i] > mx && a[i] > a[i+1]) {
            ans++;  // Increment the count of record-breaking days
        }
        mx = max(a[i], mx); // Update the maximum visitors seen so far
    }

    cout << "Record-Breaking days are: " << ans <<  endl;

    return 0;
}

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n+1];
    arr[n] = -1;
    
    for(int i=0; i<n; i++) {
        cout << "Enter element of array: ";
        cin >> arr[i]; 
    }

    record(arr, n);

    return 0;
}