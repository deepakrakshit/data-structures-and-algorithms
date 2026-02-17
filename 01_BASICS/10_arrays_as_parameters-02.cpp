#include <iostream>
using namespace std;

// Function returns a pointer to dynamically allocated array
int* fun(int n)
{
    int* p = new int[n];   // allocate memory    // you can also use (int *)malloc(n * sizeof(int));

    // initialize array
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }

    return p;
}

int main()
{
    int* a = fun(5);

    // use the array
    for (int i = 0; i < 5; i++)       // you can also do like for(int i: a) {cout << i << " ";}
    {
        cout << a[i] << " ";
    }

    // free memory
    delete[] a;

    return 0;
}
