#include <iostream>
using namespace std;

int main() {

    int n, m, key;

    cout << "Enter no. of rows: ";
    cin >> n;
    cout << "Enter no. of columns: ";
    cin >> m;

    int a[n][m];

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << "Enter element: ";
            cin >> a[i][j];
        }
    }

    cout << "Enter key to search: ";
    cin >> key;

    bool flag = false;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(a[i][j] == key) {
                cout << "Element found at position: " << i << "," << j << endl;
                flag = true;
            }
        }
    }

    if(flag == false) {
        cout << "Element not found!";
    }

    return 0;
}