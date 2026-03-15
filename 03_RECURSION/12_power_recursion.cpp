#include <iostream>
using namespace std;

/*
POWER USING RECURSION

Goal:
Compute m^n using recursion.

Example:
2^5 = 2 × 2 × 2 × 2 × 2 = 32

Recursive Idea:
power(m,n) = m * power(m, n-1)

Base Condition:
power(m,0) = 1
*/

int power(int m, int n)
{
    if (n == 0)
        return 1;  // base case

    return m * power(m, n - 1);
}

int main()
{
    cout << power(2,9);

    return 0;
}

/*
Recursion Flow

power(2,5)
= 2 * power(2,4)
= 2 * 2 * power(2,3)
= 2 * 2 * 2 * power(2,2)
= 2 * 2 * 2 * 2 * power(2,1)
= 2 * 2 * 2 * 2 * 2 * power(2,0)
= 32
*/