#include <iostream>
using namespace std;

int max(int a1, int a2, int a3) {

    if(a1>a2) {
        if(a1>a3) {
            cout<<"Max number is: " << a1 << endl;
        } else {
            cout << "Max number is: " << a3 << endl;
        }
    } else {
        if(a2>a3) {
            cout<<"Max number is: " << a2 << endl;
        } else {
            cout <<"Max number is: " << a3 << endl;
        }
    }
    
    return 0;
}

int evenodd(int a) {

    if(a%2==0) {
        cout <<a << " is a even number";
    } else {
        cout << a << " is a odd number";
    }
    return 0;
}

int main() {

    int a, a1, a2, a3;

    cout<<"Enter first number: ";
    cin>>a1;
    cout<<"Enter second number: ";
    cin>>a2;
    cout<<"Enter third number: ";
    cin>>a3;

    max(a1, a2, a3);

    cout<<"Enter number to check even/odd: ";
    cin>>a;

    evenodd(a);
    
    return 0;
}
