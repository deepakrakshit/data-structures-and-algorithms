#include <iostream>
using namespace std;

/*
    ARRAY DECLARATION

    Syntax:
    data_type array_name[size];
*/

int main()
{
    // Declaration without initialization
    int A[5];     // all values will be garbage until the values are initialized

    // Declaration with initialization
    int B[5] = {1, 2, 3, 4, 5};

    // Partial initialization
    int C[5] = {1, 2};  // rest will be 0

    // Auto size detection
    int D[] = {10, 20, 30, 40};

    cout << "Array elements:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << B[i] << " ";
    }

    return 0;
}