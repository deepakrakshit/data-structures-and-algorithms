#include <iostream>
using namespace std;

struct rectangle {
    int length;
    int breadth;
};

// Initializes structure using POINTER (modifies original)
void initilize(struct rectangle *r, int l, int b){
    r->length = l;
    r->breadth = b;
}

// Calculates area using PASS BY VALUE (no modification)
int area(struct rectangle r){
    return r.length * r.breadth; 
}

// Changes length using POINTER (modifies original)
void change_length(struct rectangle *r, int new_l){
    r->length = new_l;
}

int main(){

    rectangle r;                 // uninitialized structure

    initilize(&r, 20, 25);       // pass by pointer → sets values
    cout << area(r) << endl;     // 20 × 25 = 500

    change_length(&r, 50);       // modifies original length
    cout << area(r) << endl;     // 50 × 25 = 1250

    return 0;
}