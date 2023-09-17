#include <iostream>
using namespace std;

int main() {

    int a, b, n, out;

    cout << "Enter numbers to perform operation on: ";
    cin >> a >> b; 
    cout << "Enter number to perform operation:\n1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n";
    cin >> n;

    switch (n)
    {
    case 1:
        out = a + b;
        cout << " Addition is: " << out << endl;
        break;
    case 2:
        out = a - b;
        cout << " Substraction is: " << out << endl;
        break;
    case 3:
        out = a * b;
        cout << " Multiplication is: " << out << endl;
        break;
    case 4:
        out = a / b;
        cout << " Division is: " << out << endl;
        break;
    
    default:
        cout << "INVALID OPERATION";
        break;
    }

    return 0;
}
