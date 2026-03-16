#include <iostream>
using namespace std;

/*
FIBONACCI SERIES (ITERATIVE)

Fibonacci sequence:

0, 1, 1, 2, 3, 5, 8, 13 ...

Formula:
F(n) = F(n-1) + F(n-2)

Instead of recursion, we compute the sequence
using a loop.

Advantages:
1. No recursion stack
2. Faster than recursive version

Time Complexity: O(n)
Space Complexity: O(1)
*/

int fib(int n)
{
    int t0 = 0;
    int t1 = 1;
    int s;

    if (n <= 1)
        return n;

    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }

    return s;
}

int main()
{
    cout << fib(7);

    return 0;
}