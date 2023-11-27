#include <iostream>
using namespace std;

int main(){

    int x = 0;  // Declaration and inicialization of a data variable
    int *ptr = &x; // Declaration and inicialization of a address variable

    cout << x << endl; // Value of x

    // Dereferencing
    cout << "Endereço de X/Adress of X = " << endl;
    cout << *ptr << endl; // Access indirectaly to value of x

    cout << "Valor de X/Value of X = " << endl;
    cout << ptr << endl; // Points to address of x

    int A[5] = {0, 1, 2, 3, 4};
    int *p;
    p = A; // Address of first element in A

    cout << "Acesso indireto aos elementos do vetor A/Indirect access to elements of vector A = " << endl;
    for (int i = 0; i<5; i++){
        cout << p[i] << endl; 
    }

    int *pointer;
    pointer = new int[5]; // Data allocated in heap memory
    pointer[0] = 5;
    pointer[1] = 6; 
    pointer[2] = 7;
    pointer[3] = 8; 
    pointer[4] = 9;

    cout << "Acesso à memória no heap/Access to data in heap = " << endl;
    for (int i = 0; i<5; i++){
        cout << pointer[i] << endl; 
    }
    
    delete[] pointer; // Liberating memory

    return 0;
}
