#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int &r = a; // Reference to A (both of the variables share the same memory address)

    cout << "Value of A = " << endl;
    cout << a << endl;
    cout << "Value of R = " << endl;
    cout << r << endl;

    cout << "Address of A = " << endl;
    cout << &a << endl;
    cout << "Address of R = " << endl;
    cout << &r << endl;

    r++;
    cout << "Value of A after iterating in R value = " << endl;
    cout << a << endl;

    return 0;
}
