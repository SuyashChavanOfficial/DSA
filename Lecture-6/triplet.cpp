#include <iostream>
#include <cmath>
using namespace std;

void triplet(int a, int b, int c) {

    if (pow(c,2) == (pow(a,2)+pow(b,2))) {
        cout << "It is a Pythgorean triplet";
    } else if (pow(a,2) == (pow(c,2)+pow(b,2))) {
        cout << "It is a Pythgorean triplet";
    } else if (pow(b,2) == (pow(c,2)+pow(a,2))) {
        cout << "It is a Pythgorean triplet";
    } else {
        cout << "It is not a Pythagorean triplet";
    }
}

int main() {

    int a, b, c;

    cout << "Enter no.s to check whether they are Pythagorean Triplet or not: ";
    cin >> a >> b >> c;

    triplet(a, b, c);

    return 0;

}