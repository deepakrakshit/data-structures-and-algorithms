#include <iostream>
using namespace std;

/*
NESTED RECURSION

Nested recursion happens when a recursive function
calls itself inside another recursive call.

Example:
fun(fun(n-1))

This type of recursion is harder to trace.

Below is a classic example called
McCarthy 91 Function.
*/

int fun(int n)
{
    if (n > 100)
        return n - 10;
    else
        return fun(fun(n + 11));
}

int main()
{
    cout << fun(95);
    return 0;
}