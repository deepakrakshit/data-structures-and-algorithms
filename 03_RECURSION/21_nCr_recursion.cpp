#include <iostream>
using namespace std;

/*
nCr USING PASCAL'S TRIANGLE IDENTITY

Formula:
nCr = (n-1)C(r-1) + (n-1)Cr

Base conditions:
nC0 = 1
nCn = 1

This matches Pascal's triangle where each value
is the sum of the two values above it.
*/

int C(int n, int r)
{
    if (r == 0 || r == n)
        return 1;

    return C(n-1, r-1) + C(n-1, r);
}

int main()
{
    cout << C(5,2);

    return 0;
}