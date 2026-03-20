#include <iostream>
using namespace std;

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;  // current size

    int pos = 2;  // index to delete

    // shift elements to left
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    // print array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}