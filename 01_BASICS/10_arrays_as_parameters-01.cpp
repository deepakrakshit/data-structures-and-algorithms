#include <iostream>
using namespace std;

// Function to print elements of an array
// NOTE:
//  - int a[] and int* a mean the same thing here
//  - Arrays are passed as pointers (by address) to functions

void fun(int a[], int n) // you can even modify the array as it is passed as pointers
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}

int main()
{
    int arr[] = {5, 10, 20, 40, 80};
    int size = sizeof(arr) / sizeof(arr[0]);  // int size = 20/4 = 5

    // Passing array to function
    // Arrays cannot be passed by value in C++
    fun(arr, size);

    return 0;
}
