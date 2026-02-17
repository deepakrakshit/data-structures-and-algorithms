#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int l = 0, b = 0;

    // Input taken directly inside main
    cout << "Enter Length and Breadth: " << endl;
    cin >> l >> b;

    // All calculations done inside main (no functions)
    int area = l * b;
    int peri = 2 * (l + b);

    // Output
    printf("Area = %d\nPerimeter = %d\n", area, peri);

    return 0;
}