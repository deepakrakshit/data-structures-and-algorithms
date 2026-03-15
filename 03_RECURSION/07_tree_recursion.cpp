#include <iostream>
using namespace std;

/*
TREE RECURSION

Tree recursion happens when a function calls itself
more than once.

This creates a tree-like structure of function calls.

Example:
Each call generates two more recursive calls.

This increases number of calls rapidly.
*/

void fun(int n)
{
    if (n > 0)
    {
        cout << n << " ";

        fun(n - 1);   // first recursive call
        fun(n - 1);   // second recursive call
    }
}

int main()
{
    fun(3);
    return 0;
}