#include <iostream>
using namespace std;

int main() {

    int i, j, row, col;

    // RECTANGLE

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

    // // HOLLOW RECTANGLE

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
    
    cout << "Enter no. of rows to print: ";
    cin >> row;

    for(i=row; i>=1; i--) {
        for(j=1; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    // INVERTED PYRAMID BY 180 DEGREE

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

    cout << "Enter no. of rows: ";
    cin >> row;

    for(i=1; i<=row; i++) {
        for(j=1; j<=i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    // FLOYD'S TRIANGLE 

    int count=1;

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

    // INVERTED PATTERN 

    cout << "Enter no. of rows: ";
    cin >> row;

    for(i=5; i>=1; i--) {
        for(j=1; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // 0-1 PATTERN 

    cout << "Enter no. of rows: ";
    cin >> row;

    for(i=1; i<=row; i++) {
        for(j=1; j<=i; j++) {
            if((i+j)%2==0) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    // RHOMBUS PATTERN 

    cout << "Enter no. of rows: ";
    cin >> row;

    for(i=1; i<=row; i++) {
        for(j=1; j<=(row-i); j++) {
            cout << "  ";
        }
        
        for(j=1; j<=row; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // NUMBER PATTERN 

    cout << "Enter no. of rows: ";
    cin >> row;

    for(i=1; i<=row; i++) {
        for(j=1; j<=(row-i); j++) {
            cout << " ";
        }

        for(j=1; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // PALINDROMIC PATTERN

    cout << "Enter no. of rows: ";
    cin >> row;

    for(i=1; i<=row; i++) {
        for(j=1; j<=row-i; j++) {
            cout << "  ";
        }

        for(j=i; j>=1; j--) {
            cout << j << " ";
        }

        if(i>=2) {
            for(j=2; j<=i; j++) {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    // INVERTED STAR PATTERN 

    cout << "Enter no. of rows: ";
    cin >> row;

    // for upper star pattern 
    for(i=1; i<=row; i++) {
        for(j=1; j<=row-i; j++) {
            cout << "  ";
        }
        for(j=1; j<=(2*i-1); j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // for lower star pattern 
    for(i=row; i>=1; i--) {
        for(j=1; j<=row-i; j++) {
            cout << "  ";
        }
        for(j=1; j<=(2*i-1); j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // ZIG-ZAG PATTERN 

    cout << "Enter no. of stars: ";
    cin >> col;

    for(i=1; i<=3; i++) {
        for(j=1; j<=col; j++) {
            if(((i+j)%4==0) || (i==2 && j%4==0)) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl; 
    }

    return 0;
}