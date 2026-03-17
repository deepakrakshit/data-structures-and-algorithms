#include <iostream>
using namespace std;

/*
    ARRAY INTRODUCTION

    Definition:
    An array is a collection of elements of the same data type
    stored in contiguous memory locations.

    Key Properties:
    - Fixed size
    - Indexed (0-based indexing)
    - Homogeneous elements (same type)
    - Stored in continuous memory
*/

int main()
{
    // Example array
    int A[5] = {10, 20, 30, 40, 50};

    cout << "Array Elements:" << endl;

    // Accessing elements using index
    for (int i = 0; i < 5; i++)
    {
        cout << "A[" << i << "] = " << A[i] << endl;
    }

    // Access using pointer arithmetic
    cout << "\nUsing pointer notation:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(A + i) << endl;
    }

    return 0;
}