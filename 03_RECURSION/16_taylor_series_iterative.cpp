#include <iostream>
using namespace std;

/*
TAYLOR SERIES (ITERATIVE)

Taylor expansion of e^x:

e^x = 1 + x/1! + x²/2! + x³/3! + ...

We calculate each term one by one using a loop.

Variables:
num → stores powers of x (x^n)
den → stores factorial values (n!)

Each loop computes the next term:
term = x^n / n!

Time Complexity: O(n)
*/

double e(int x, int n)
{
    double sum = 1;
    double num = 1;   
    double den = 1;

    for (int i = 1; i <= n; i++)
    {
        num = num * x;
        den = den * i;

        sum = sum + (num / den);
    }

    return sum;
}

int main()
{
    cout << e(1, 10);

    return 0;
}