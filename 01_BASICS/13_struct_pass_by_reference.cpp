#include <iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

// PASS BY REFERENCE
int area(struct rectangle &r1){
    r1.length++;          // modifies the ORIGINAL structure (r), no copy is made
    return r1.length * r1.breadth;
}

int main(){

    rectangle r = {15, 25};

    cout << area(r) << endl;  // r is passed by reference → output: 16 * 25 = 400
    cout << r.length << endl; // length is modified (16)

    return 0;
}