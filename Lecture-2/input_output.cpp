#include<iostream>
//Preprocessor directive. Used to include files like input/output files
using namespace std;

int main() {

    int amt1, amt2;

    cout<<"Enter amount1: ";
    cin>>amt1;

    cout<<"Enter amount2: ";
    cin>>amt2;

    int sum = amt1 + amt2;

    cout<<"The total amount is: " << sum;
}