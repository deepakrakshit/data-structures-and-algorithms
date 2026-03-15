#include <iostream>
using namespace std;

/*
FACTORIAL USING RECURSION

Factorial of a number n is defined as:

n! = n × (n-1) × (n-2) × ... × 1

Example:
5! = 5 × 4 × 3 × 2 × 1 = 120

Recursive Idea:
fact(n) = n * fact(n-1)

Base Condition:
0! = 1
1! = 1
*/

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;      // base condition

    return n * fact(n - 1);
}

int main()
{
    cout << fact(5);

    return 0;
}

/*
Recursion Flow

fact(5)
= 5 * fact(4)
= 5 * 4 * fact(3)
= 5 * 4 * 3 * fact(2)
= 5 * 4 * 3 * 2 * fact(1)
= 5 * 4 * 3 * 2 * 1

Output = 120
*/