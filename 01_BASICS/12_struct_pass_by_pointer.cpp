#include <iostream>
using namespace std;

struct rectangle {
    int length;
    int breadth;
};

// Pass by POINTER
int area(rectangle *r1) {
    r1->length++;            // modifies ORIGINAL structure
    return r1->length * r1->breadth;
}

int main() {

    rectangle r = {15, 25};

    cout << area(&r) << endl; // pass ADDRESS of structure
    cout << r.length << endl; // length is modified to 16

    return 0;
}