#include <iostream>
using namespace std;

/*
TAIL RECURSION

A recursion is called tail recursion when the recursive
call is the LAST operation in the function.

No work is left after the recursive call.

Characteristics:
1. Recursive call is the final statement.
2. Easy to convert into a loop.
3. Compiler can sometimes optimize it.

Example:
Print numbers from n to 1.
*/

void fun(int n)
{
    if (n > 0)
    {
        cout << n << " ";   // work before recursion
        fun(n - 1);         // last operation → tail recursion

        // If work happens after recursion, it is NOT tail recursion
        // Example: fun(n-1) + n
    }
}

int main()
{
    fun(5);
    return 0;
}