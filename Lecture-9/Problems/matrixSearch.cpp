// Given a n x m matrix.

// Write an algorithm to find that the given value exists in the matrix
// or not.

// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to
// bottom.

#include <iostream>
using namespace std;

int main() {

    int n, m;

    cin >> n >> m;

    int key;

    cin >> key;

    int a[n][m];

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }

    int r = 0, c = m-1;
    bool found = false; 
    
    while(r < n && c >= 0) {
        if (a[r][c] == key) {
            found = true;
        } if(a[r][c] > key) {
            c--;
        } else {
            r++;
        }
    }

    if(found == true) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}