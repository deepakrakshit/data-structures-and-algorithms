// TOPIC: Stack vs Heap Memory

#include <iostream>
using namespace std;

int main()
{
    // STACK MEMORY
    // Variables created inside functions are stored in stack memory.
    // Stack memory is:
    // - fast
    // - automatically managed
    // - destroyed when function ends

    int a = 10; // stored in stack


    // HEAP MEMORY
    // Heap memory is manually allocated by programmer.
    // It is used when we want memory during runtime.

    int *p = new int; // memory allocated in heap
    *p = 25;

    cout << "Stack variable a: " << a << endl;
    cout << "Heap variable *p: " << *p << endl;


    // Always free heap memory
    delete p;

    return 0;
}