// Original variables are passed as alias

#include <iostream>
using namespace std;

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 10, b = 20;

    swap(a, b);
    // x and y become references (aliases) of a and b.
    // Changes inside the function directly affect a and b.

    cout << a << endl << b << endl;   // 20 10
    return 0;
}