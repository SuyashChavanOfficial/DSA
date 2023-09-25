
// An arithmetic array is an array that contains at least two integers and the differences
// between consecutive integers are equal. For example, [9, 10], [3, 3, 3], and [9, 7, 5, 3] are
// arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are not arithmetic arrays.

// Sarasvati has an array of N non-negative integers. The i-th integer of the array is Le Sal)
// wants to choose a contiguous arithmetic subarray from her array that has the maximum
// length. Please help her to determine the length of the longest contiguous arithmetic
// subarray.

#include <iostream>
#include <vector>
using namespace std;

// Function to find the length of the longest contiguous arithmetic subarray
void maxLen(int a[], int n) {

    // Initialize the answer to 2 since a subarray with at least two elements can be created
    int ans = 2;
    // Calculate the common difference (pd) between the first two elements
    int pd = a[1] - a[0];
    // Initialize a pointer (j) to the third element and a variable (curr) to store the current subarray length
    int j = 2;
    int curr = 2;

    // Iterate through the array starting from the third element
    while (j < n) {
        
        // Check if the current pair of elements has the same difference as the previous pair
        if (pd == a[j] - a[j - 1]) {
            // If they have the same difference, increment the current subarray length (curr)
            curr++;
        } else {
            // If the difference changes, update pd to the new difference and reset curr to 2
            pd = a[j] - a[j - 1];
            curr = 2;
        }
        // Update the answer (ans) with the maximum of its current value and the current subarray length (curr)
        ans = max(ans, curr);
        j++;
    }

    cout << ans << endl;
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

    maxLen(arr, n);

    return 0;

}