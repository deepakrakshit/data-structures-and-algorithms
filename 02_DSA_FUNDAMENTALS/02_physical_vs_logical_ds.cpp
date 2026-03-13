// TOPIC: Physical vs Logical Data Structures

/*
THEORY
------
Physical Data Structures
------------------------
These are structures that define how data is actually stored in memory.
Examples:
    Array
    Linked List

Logical Data Structures
-----------------------
These define how data is organized logically.
Examples:
    Stack
    Queue
    Tree
    Graph

Important idea:
Logical structures can be implemented using physical structures.
Example:
Stack can be implemented using array OR linked list.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}