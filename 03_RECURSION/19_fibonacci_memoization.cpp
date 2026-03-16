#include <iostream>
using namespace std;

/*
FIBONACCI WITH MEMOIZATION

Memoization stores previously
computed results to avoid repetition.

Time Complexity: O(n)
*/

int F[100];

int fib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }

    if (F[n - 2] == -1)
        F[n - 2] = fib(n - 2);

    if (F[n - 1] == -1)
        F[n - 1] = fib(n - 1);

    return F[n - 1] + F[n - 2];
}

int main()
{
    for (int i = 0; i < 100; i++)
        F[i] = -1;

    cout << fib(6);

    return 0;
}