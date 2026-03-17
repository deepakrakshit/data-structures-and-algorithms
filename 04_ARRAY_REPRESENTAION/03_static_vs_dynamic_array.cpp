#include <iostream>
using namespace std;

/*
    STATIC vs DYNAMIC ARRAY

    Static Array:
    - Size is fixed at compile time
    - Stored in stack memory

    Dynamic Array:
    - Size is decided at runtime
    - Stored in heap memory
    - Created using new operator
*/

int main()
{
    // Static array
    int A[5] = {1, 2, 3, 4, 5};

    cout << "Static Array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;

    // Dynamic array
    int *p = new int[5];  // allocated in heap

    // (C style) dynamic allocation:
    // int *p = (int *)malloc(5 * sizeof(int));

    // and for c include the header file <stdlib.h>

    // assigning values
    for (int i = 0; i < 5; i++)
    {
        p[i] = (i + 1) * 10;
    }

    cout << "\nDynamic Array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }

    // free memory
    delete[] p;

    // (C style) free memory:
    // free(p);

    return 0;
}
