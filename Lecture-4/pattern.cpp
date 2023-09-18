#include <iostream>
using namespace std;

int main() {

    // RECTANGLE

    int i,j, row, col;
    cout << "Enter no. of rows to print: ";
    cin >> row;
    cout << "Enter no. of columns to print: ";
    cin >> col;

    for(i=1; i<=row; i++) {
        for(j=1; j<=col; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // HOLLOW RECTANGLE

    int i, j, row, col;

    cout << "Enter no. of rows to print: ";
    cin >> row;
    cout << "Enter no. of columns to print: ";
    cin >> col;

    for (i=row; i<=1; i--) {
        for(j=1; j<=col; j++) {
            if(i==1 || i==row || j==1 || j==col) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // INVERTED PYRAMID

    int n, i, j;
    
    cout << "Enter no. of rows to print: ";
    cin >> n;

    for(i=n; i>=1; i--) {
        for(j=1; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    // INVERTED PYRAMID BY 180 DEGREE

    int row, i, j;

    cout << "Enter no. of rows: ";
    cin >> row;

    for (i=1; i<=row; i++) {
        for(j=1; j<=row; j++) {
            if(j<=row-i) {
                cout << "  ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }

    // HALF PYRAMID USING NUMBERS

    int row, i, j;

    cout << "Enter no. of rows: ";
    cin >> row;

    for(i=1; i<=row; i++) {
        for(j=1; j<=i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    // FLOYD'S TRIANGLE 

    int row, count=1, i, j;

    cout << "Enter no. of rows: ";
    cin >> row;

    for(i=1; i<=row; i++) {
        for(j=1; j<=i; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    // BUTTERFLY PATTERN 

    int i, j, row;

    cout << "Enter no. of rows: ";
    cin >> row;

    // for top half stars
    for(i=1; i<=row; i++) {
        for(j=1; j<=i; j++) {
            cout << "* ";
        }

        int space = 2*row-2*i;
        for(j=1; j<=space; j++) {
            cout << "  ";
        }

        for(j=1; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // for bottom half stars 
    for(i=row; i>=1; i--) {
        for(j=1; j<=i; j++) {
            cout << "* ";
        }

        int space = 2*row-2*i;
        for(j=1; j<=space; j++) {
            cout << "  ";
        }

        for(j=1; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}