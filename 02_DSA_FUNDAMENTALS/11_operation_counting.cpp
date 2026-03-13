#include <iostream>
using namespace std;

/*
TOPIC: Counting Operations to Find Time Complexity

Instead of directly writing Big-O, we first count
how many basic operations the program performs.

Steps:
1. Count important operations (like assignments, comparisons).
2. Express them as a function of n.
3. Simplify the function using Big-O notation.

Example: f(n) = 2n + 3  →  O(n)
Example: f(n) = n^2 + 5n + 2 → O(n^2)

We ignore constants and smaller terms.
*/


/*
Example 1: Sum of array
*/

int sumArray(int arr[], int n)
{
    int sum = 0;      // 1 operation

    for(int i = 0; i < n; i++)  // loop runs n times
    {
        sum = sum + arr[i];     // 1 operation per iteration
    }

    /*
    Operation counting:

    sum = 0                 → 1
    loop initialization     → 1
    loop comparisons        → n+1
    loop increments         → n
    sum = sum + arr[i]      → n

    Total operations:

    f(n) = 2n + 3

    Ignore constants → O(n)
    */

    return sum;
}



/*
Example 2: Nested loops
*/

void printPairs(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << i << "," << j << endl;
        }
    }

    /*
    Outer loop = n
    Inner loop = n

    Total operations = n * n

    f(n) = n²

    Time Complexity = O(n²)
    */
}



/*
Example 3: Constant operations
*/

void swapNumbers(int &a, int &b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    /*
    Operations are fixed (3 assignments).

    f(n) = 3

    Time Complexity = O(1)
    */
}



int main()
{
    int arr[] = {1,2,3,4,5};

    cout << "Sum: " << sumArray(arr,5) << endl;

    cout << "\nPairs:\n";
    printPairs(3);

    int x = 5, y = 10;

    swapNumbers(x,y);

    cout << "\nAfter swap: " << x << " " << y << endl;

    return 0;
}