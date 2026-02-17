#include <iostream>
using namespace std;

struct rectangle {
    int length;
    int breadth;
};

// Function returns a POINTER to a structure
rectangle* fun() {

    rectangle *p = new rectangle;  // dynamic memory allocation (heap)
 // struct rectangle *p = (struct rectangle *)malloc(sizeof(struct rectangle))

    p->length = 15;
    p->breadth = 25;

    return p;   // return address of dynamically created structure
}

int main() {

    rectangle *r = fun();   // receive pointer returned by function

    cout << r->length << " " << r->breadth << endl;

    delete r;  // free allocated memory (important)

    return 0;
}

// We return a structure pointer only if the structure is dynamically allocated, otherwise the pointer becomes dangling.