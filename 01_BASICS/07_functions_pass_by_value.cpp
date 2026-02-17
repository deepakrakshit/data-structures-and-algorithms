// Copy of values are passed

#include <iostream>
using namespace std;

void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 10, b = 20;

    swap(a, b);
    // Copies of a and b are passed to x and y.
    // The swap happens only between x and y, not a and b.

    cout << a << endl << b << endl;   // 10 20
    return 0;
}