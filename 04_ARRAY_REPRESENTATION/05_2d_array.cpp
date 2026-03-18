#include <iostream>
using namespace std;

/*
    2D ARRAY (3 methods)

    1. Static (stack)
    2. Array of pointers
    3. Double pointer
*/

int main()
{
    // 1. Static 2D array
    int A[2][3] = {{1,2,3},{4,5,6}};

    cout << "Static Array:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    // 2. Array of pointers
    int *B[2];
    B[0] = new int[3];
    B[1] = new int[3];

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            B[i][j] = i + j;

    cout << "\nArray of Pointers:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << B[i][j] << " ";
        cout << endl;
    }

    // 3. Double pointer
    int **C;
    C = new int*[2];

    for (int i = 0; i < 2; i++)
        C[i] = new int[3];

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            C[i][j] = i * j;

    cout << "\nDouble Pointer:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    // free memory
    for (int i = 0; i < 2; i++)
    {
        delete[] B[i];
        delete[] C[i];
    }
    delete[] C;

    return 0;
}