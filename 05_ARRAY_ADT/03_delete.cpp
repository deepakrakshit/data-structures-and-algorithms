#include <iostream>
using namespace std;

int main() {
    int length, size;

    // length = total capacity, size = current elements
    cout << "Enter capacity and current size: ";
    cin >> length >> size;

    int arr[100]; // fixed size (safer than variable length array)

    // input elements
    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int index;
    cout << "Enter index to delete: ";
    cin >> index;

    // check valid index
    if (index < 0 || index >= size) {
        cout << "Invalid index!";
        return 0;
    }

    // shift elements to left
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--; // reduce size after deletion

    // display updated array
    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
