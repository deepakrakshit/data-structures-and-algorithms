#include <iostream>
using namespace std;

/*
TAYLOR SERIES USING RECURSION

Taylor series for e^x:

e^x = 1 + x/1! + x²/2! + x³/3! + ...

We compute each term recursively.

To avoid recomputing factorial and power every time,
we use static variables to store:

p → power of x
f → factorial

Time Complexity: O(n)
*/

double e(int x, int n)
{
    static double p = 1;
    static double f = 1;
    double r;

    if (n == 0)
        return 1;

    r = e(x, n - 1);

    p = p * x;
    f = f * n;

    return r + p / f;
}

int main()
{
    cout << e(2, 10);

    return 0;
}