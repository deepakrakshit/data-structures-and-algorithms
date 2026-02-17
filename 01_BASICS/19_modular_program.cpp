#include <iostream>
#include <stdio.h>
using namespace std;

// Function to calculate area
int area(int l, int b){
    return l * b;
}

// Function to calculate perimeter
int perimeter(int l, int b){
    return 2 * (l + b);
}

int main(){

    int l = 0, b = 0;

    // Input
    cout << "Enter Length and Breadth: " << endl;
    cin >> l >> b;

    // Calling functions for computation
    printf("Area = %d\nPerimeter = %d\n", area(l, b), perimeter(l, b));

    return 0;
}