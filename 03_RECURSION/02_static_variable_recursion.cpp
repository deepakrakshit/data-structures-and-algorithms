#include <iostream>
using namespace std;

/*
STATIC VARIABLE IN RECURSION

A static variable is declared inside a function but it keeps
its value between function calls.

Important points:
1. Static variables are created only once.
2. Their value persists across recursive calls.
3. They are stored in static memory (not stack).

In recursion:
Every recursive call shares the SAME static variable.

Example below:
The static variable 'x' keeps increasing during recursion.
*/

int fun(int n)
{
    static int x = 0;   // created once, shared by all calls

    if (n > 0)
    {
        x++;                    // value persists
        return fun(n - 1) + x;
    }

    return 0;
}

int main()
{
    int result = fun(5);

    cout << "Result: " << result << endl;

    return 0;
}

/*
Execution idea:

Call stack:

fun(5)
fun(4)
fun(3)
fun(2)
fun(1)
fun(0)

Static variable x increases like:
1,2,3,4,5

Return phase adds them together.

Output = 25
*/