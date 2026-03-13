#include <iostream>
using namespace std;

/*
RECURSION

Recursion means:
A function calling itself.

Two important parts exist in recursion:

1) Base Condition
   - stops the recursion
   - Without base condition → infinite recursion

2) Recursive Call
   - function calls itself

   - Every recursive call is stored in the CALL STACK.

   - Example trace for fun(5):

    fun(5)
    fun(4)
    fun(3)
    fun(2)
    fun(1)
    fun(0) → stop

*/


// Example 1 — Printing before recursive call
// This is sometimes called "Descending recursion"

void fun(int n)
{
    if(n > 0)                 // base condition
    {
        cout << n << endl;    // processing step

        fun(n - 1);           // recursive call
    }
}

// Example 2 — Printing after recursive call
// This is HEAD RECURSION

void fun2(int n)
{
    if(n > 0)
    {
        fun2(n - 1);          // recursive call first

        cout << n << endl;    // processing after return
    }
}

/*
Execution Trace for fun2(3):

fun2(3)
 └ fun2(2)
    └ fun2(1)
       └ fun2(0) → stop


Now stack starts returning:

print 1
print 2
print 3

Output:

1
2
3
*/

int main()
{
    cout << "Descending recursion:\n";
    fun(5);

    cout << "\nHead recursion example:\n";
    fun2(3);

    return 0;
}
