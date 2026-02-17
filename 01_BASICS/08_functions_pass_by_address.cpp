// Memory addresses are passed

#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 10, b = 20;

    swap(&a, &b);
    // Addresses of a and b are passed.
    // The function modifies the original variables using pointers.

    cout << a << endl << b << endl;   // 20 10
    return 0;
}