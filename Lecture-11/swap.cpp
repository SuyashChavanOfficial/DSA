#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    int *aptr = &a;
    int *bptr = &b;

    swap(aptr, bptr);
    swap(&c, &d);

    cout << a << " " << b << endl;
    cout << c << " " << d << endl;

    return 0;
}