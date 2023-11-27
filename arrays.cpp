#include <iostream>
using namespace std;

int main(){
    // Declaring and initializing a 5 positions array with a integer type
    int A[5] = {0,1,2,3,4};
    for (int i = 0; i<5; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    int syze = sizeof(A);
    cout << syze << endl;
    // 4 bytes (integer) * 5 (number of positions)
    return 0;
}
