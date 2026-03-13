// TOPIC: Time Complexity Basics

#include <iostream>
using namespace std;

/*
Time Complexity means:
How the running time of a program grows when input size grows.

We represent it using Big-O notation.

Examples:

O(1) constant
O(n) linear
O(n^2) quadratic
O(log n) logarithmic
*/

int main()
{
    int n = 5;

    for(int i=0;i<n;i++)
    {
        cout<<i<<" ";
    }

    // Loop runs n times
    // Time Complexity = O(n)

    return 0;
}