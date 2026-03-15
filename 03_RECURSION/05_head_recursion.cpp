#include <iostream>
using namespace std;

/*
HEAD RECURSION

In head recursion, the recursive call happens FIRST,
before doing any work.

Work is done AFTER the recursive call returns.

Characteristics:
1. Recursive call happens at the beginning.
2. Output/work happens during the RETURN phase.
3. Harder to convert into a loop because the work
   happens after recursion finishes.

Example:
Print numbers from 1 to n.
*/

void fun(int n)
{
    if (n > 0)
    {
        fun(n - 1);   // recursive call first
        cout << n << " ";   // work after recursion
    }
}

int main()
{
    fun(5);
    return 0;
}