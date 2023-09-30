// We are given a key value. We have to find pairs in array such 
// that the sum of the pair is k
// Note: the array should be sorted.

#include <iostream>
using namespace std;
bool pairSum(int a[], int n, int key) {

    int low = 0, high = n-1;

    while(low < high) {

        if(a[low] + a[high] == key) {
            cout << low << " " << high << endl;
            return true;
        } else if (a[low] + a[high] > key) {
            high--;
        } else {
            low++;
        }
    }

    return false;
}

int main() {

    int n, key;
    cin >> n >> key;

    int a[n];

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    pairSum(a, n, key);

    return 0;
}