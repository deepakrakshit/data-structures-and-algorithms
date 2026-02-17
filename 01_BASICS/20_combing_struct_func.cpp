#include <iostream>
#include <stdio.h>
using namespace std;

// Structure holding related data
struct rectangle{
    int length;
    int breadth;
};

// Initializes structure using pointer (modifies original)
void initilize(struct rectangle *r, int l, int b){
    r->length = l;
    r->breadth = b;
}

// Calculates area (pass by value, no modification)
int area(struct rectangle r){
    return r.length * r.breadth;
}

// Calculates perimeter (pass by value, no modification)
int perimeter(struct rectangle r){
    return 2 * (r.length + r.breadth);
}

int main(){

    rectangle r = {0, 0};   // structure object

    int l, b;

    // Input
    cout << "Enter Length and Breadth: " << endl;
    cin >> l >> b;

    // Initialize structure
    initilize(&r, l, b);

    // Use structure with related functions
    printf("Area = %d\nPerimeter = %d\n", area(r), perimeter(r));

    return 0;
}