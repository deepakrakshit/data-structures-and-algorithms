#include <iostream>
using namespace std;

/*
LINEAR RECURSION

Linear recursion happens when a function makes
ONLY ONE recursive call.

The recursive calls form a straight chain
instead of a tree structure.

Characteristics:
1. Only one recursive call per function.
2. Call stack grows linearly.
3. Easy to trace compared to tree recursion.
4. Common in problems like factorial, sum of numbers, etc.

Example:
Print numbers from n to 1.
*/

void fun(int n)
{
    if (n > 0)
    {
        cout << n << " ";

        fun(n - 1);   // single recursive call → linear recursion

        // Code written here executes during the RETURN phase
        // cout << "(return) ";
    }
}

int main()
{
    fun(5);
    return 0;
}