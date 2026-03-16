#include <iostream>
using namespace std;

/*
TAYLOR SERIES USING HORNER'S RULE

Instead of computing powers and factorials separately,
Horner's rule rewrites the equation.

e^x = 1 + x/n (1 + x/(n-1) (1 + x/(n-2) ...))

This reduces repeated calculations.

Time Complexity: O(n)
*/

double e(int x, int n)
{
    static double s = 1;

    if (n == 0)
        return s;

    s = 1 + x * s / n;

    return e(x, n - 1);
}

int main()
{
    cout << e(2, 10);

    return 0;
}