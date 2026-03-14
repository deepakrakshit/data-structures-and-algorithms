#include <iostream>
using namespace std;

/*
GLOBAL VARIABLE IN RECURSION

A global variable is declared outside all functions.

Important points:
1. Accessible from any function.
2. Only one copy exists in the program.
3. Stored in global memory area.

In recursion:
All recursive calls use the SAME global variable.

Global variables behave similar to static variables
but they are accessible everywhere.
*/

int x = 0;   // global variable

int fun(int n)
{
    if (n > 0)
    {
        x++;                    // shared across all recursive calls
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
Execution flow:

fun(5)
fun(4)
fun(3)
fun(2)
fun(1)
fun(0)

Global x becomes:
1,2,3,4,5

Return phase sums them.

Output = 25
*/