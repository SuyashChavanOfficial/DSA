#include <iostream>
using namespace std;

void fact(int n) {

    int fact=1;

    for(int i=n; i>=2 ; i--) {
        fact *= i;
    }

    cout << "Factorial of " << n << " is: " << fact; 
}

int main() {

    int n;

    cout << "Enter no. to find factorial: ";
    cin >> n;

    fact(n);

    return 0;
}