#include <iostream>
using namespace std;

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;  // current size

    int pos = 2;   // index where you want to insert
    int val = 99;  // value to insert

    // shift elements to right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;
    n++;

    // print array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}