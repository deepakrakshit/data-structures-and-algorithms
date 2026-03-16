#include <iostream>
using namespace std;

/*
COMBINATION (nCr)

Combination means selecting r objects from n objects
without caring about order.

Formula:

nCr = n! / (r! * (n-r)!)

Example:
5C2 = 5! / (2! * 3!)
     = (5×4×3×2×1) / (2×1 × 3×2×1)
     = 10
*/

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int C(int n, int r)
{
    int t1, t2, t3;

    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n - r);

    return t1 / (t2 * t3);
}

int main()
{
    cout << C(5,2);
}