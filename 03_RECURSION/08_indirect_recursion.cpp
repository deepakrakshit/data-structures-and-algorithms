#include <iostream>
using namespace std;

/*
INDIRECT RECURSION

Indirect recursion happens when multiple functions
call each other in a circular manner.

Example:
Function A calls Function B
Function B calls Function A

This continues until base condition is met.
*/

void funB(int n);

void funA(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        funB(n - 1);
    }
}

void funB(int n)
{
    if (n > 1)
    {
        cout << n << " ";
        funA(n / 2);
    }
}

int main()
{
    funA(20);
    return 0;
}