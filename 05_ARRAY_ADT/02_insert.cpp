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

    if(size >= length){
        cout << "Array is full, cannot insert!";
        return 0;
    }

    int index, value;
    cout << "Enter Index and value of the element you wish to insert: " << endl;
    cin >> index >> value;

    if(index >= 0 && index <= size){
        for (int i = size; i > index; i--) {
            arr[i] = arr[i - 1];
        }

        arr[index] = value;
        size++;
    } else {
        cout << "Invalid index!";
        return 0;
    }

    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
