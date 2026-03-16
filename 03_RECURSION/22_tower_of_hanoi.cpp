#include <iostream>
using namespace std;

/*
TOWER OF HANOI

Move n disks from source rod A
to destination rod C using helper rod B.

Steps:
1 Move n-1 disks from A → B
2 Move disk from A → C
3 Move n-1 disks from B → C

Minimum moves = 2^n - 1
*/

void TOH(int n, int A, int B, int C)
{
    if (n > 0)
    {
        TOH(n-1, A, C, B);

        cout << "Move disk from " << A << " to " << C << endl;

        TOH(n-1, B, A, C);
    }
}

int main()
{
    TOH(3,1,2,3);

    return 0;
}