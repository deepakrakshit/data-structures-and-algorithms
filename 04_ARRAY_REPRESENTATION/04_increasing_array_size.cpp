#include <iostream>
using namespace std;

/*
    Increasing Array Size (not real resizing)

    - Create new larger array
    - Copy elements
    - Delete old array
*/

int main()
{
    int *p = new int[5];

    for (int i = 0; i < 5; i++)
        p[i] = i + 1;

    int *q = new int[10];

    for (int i = 0; i < 5; i++)
        q[i] = p[i];

    delete[] p;

    p = q;
    q = NULL;

    for (int i = 0; i < 5; i++)
        cout << p[i] << " ";

    delete[] p;

    return 0;
}