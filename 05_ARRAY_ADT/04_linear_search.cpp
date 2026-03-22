#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key = 30;
    int found = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;

            // Transposition: swap with previous element
            if (i > 0) {
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
                found = i - 1; // new position after swap
            }
            break;
        }
    }

    if (found != -1)
        cout << "Element found at index: " << found << endl;
    else
        cout << "Element not found" << endl;

    // Print updated array
    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
