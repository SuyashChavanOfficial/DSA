#include <iostream>
using namespace std;

int main() {

    int a, b, c, sum = 0;
    
    // TO FIND SUM 
    
    cout<<"Enter number to find sum";
    cin>>a;

    for(int i=0; i<=a; i++) {
        sum = sum + i;
    }

    cout<<"Sum is: " << sum << endl;

    // TO TAKE INPUT FROM USER AND PRINT IT UNTIL INPUT IS POSITIVE
   
    cout << "Enter number: ";
    cin >> b;
    while(b>0) {
        cout << b << endl;
        cout << "Enter number: ";
        cin >> b;
    }

    // USE OF DO WHILE LOOP 

    cout << "Enter first number: ";
    cin >> c;
    do {
        cout<< c <<endl;
        cout<< "Enter next number: ";
        cin>> c;
    } while(c>0);

    return 0;
}
