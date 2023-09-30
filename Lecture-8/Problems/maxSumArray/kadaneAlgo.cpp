
// KADANE'S ALGORITHM:
// We look for maximum number of positive integers present together
// We store that sum in a variable, which keeps updating.
// If we get negative sum, then we update current sum to 0.
// We create a maxSum variable, which stores max of maxSum and current sum.

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++) {
        currSum += a[i];
        if(currSum < 0) {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }

    cout << maxSum << endl;

    return 0;
}