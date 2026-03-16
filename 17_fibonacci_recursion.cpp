#include <iostream>
using namespace std;

/*
FIBONACCI USING RECURSION

Series:

0 1 1 2 3 5 8 13 ...

Formula:

F(n) = F(n-1) + F(n-2)

Base cases:
F(0) = 0
F(1) = 1

Time Complexity: O(2^n)
Very slow due to repeated calculations.

It uses excessive recursion (when a recursive function repeats the same calculations many times, causing too many recursive calls).
*/

int fib(int n)
{
    if (n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    cout << fib(6);

    return 0;
}