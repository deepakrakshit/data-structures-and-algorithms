#include <iostream>
using namespace std;

int main() {

    int length, size;
    cout << "Enter Length and size of the array: " << endl;
    cin >> length >> size;

    int arr[length];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int index;
    cout << "Enter index to delete: ";
    cin >> index;

    if(index < 0 || index >= size){
        cout << "Invalid index!";
        return 0;
    }

    // shift elements to left
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    // print array
    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
