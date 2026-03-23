#include <iostream>
using namespace std;

int main() {
    int length, size;

    // length = total capacity, size = current elements
    cout << "Enter capacity and current size: ";
    cin >> length >> size;

    int arr[100]; // fixed size to avoid VLA issues

    // input elements
    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // check if array is full
    if (size == length) {
        cout << "Array is full!";
        return 0;
    }

    int index, value;
    cout << "Enter index and value to insert: ";
    cin >> index >> value;

    // check valid index
    if (index < 0 || index > size) {
        cout << "Invalid index!";
        return 0;
    }

    // shift elements to right
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // insert value
    arr[index] = value;
    size++;

    // display updated array
    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
