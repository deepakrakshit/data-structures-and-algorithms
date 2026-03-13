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

void fun(int n)
{
    if(n > 0)                 // base condition
    {
        cout << n << endl;    // processing step

        fun(n - 1);           // recursive call
    }
}

int main()
{
    fun(5);

    return 0;
}
