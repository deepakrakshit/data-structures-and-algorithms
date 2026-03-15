#include <iostream>
using namespace std;

/*
FAST POWER USING RECURSION
(Exponentiation by Squaring)

Goal:
Compute m^n efficiently.

If n is even:
    m^n = (m*m)^(n/2)

If n is odd:
    m^n = m * (m*m)^((n-1)/2)

This reduces recursion depth.

Time Complexity:
O(log n)
*/

int power(int m, int n)
{
    if (n == 0)
        return 1;

    if (n % 2 == 0)
        return power(m * m, n / 2);
    else
        return m * power(m * m, (n - 1) / 2);
}

int main()
{
    cout << power(2, 9);

    return 0;
}