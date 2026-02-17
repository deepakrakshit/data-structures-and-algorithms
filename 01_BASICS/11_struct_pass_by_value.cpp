#include <iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

// PASS BY VALUE
int area(struct rectangle r1){
    r1.length++;                      // modifies only the local copy, not the original structure
    return r1.length * r1.breadth;
}

int main(){

    struct rectangle r = {15, 25};
    cout << area(r) << endl; // r is copied into r1 → output: 16 * 25 = 400
    cout << r.length << endl; // original length remains unchanged (15)

    return 0;
}