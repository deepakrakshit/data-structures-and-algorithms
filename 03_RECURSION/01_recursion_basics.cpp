#include <iostream>
using namespace std;

/*
RECURSION

Recursion means:
A function calling itself.

Two important parts exist in recursion:

1) Base Condition
   - stops the recursion

2) Recursive Call
   - function calls itself

Without base condition → infinite recursion
*/

void fun(int n)
{
    if(n > 0)                // base condition
    {
        cout << n << endl;

        fun(n - 1);          // recursive call
    }
}

int main()
{
    fun(5);
}