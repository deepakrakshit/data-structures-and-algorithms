#include <iostream>
using namespace std;

class Array {
private:
    int *A;     // pointer to store array
    int size;   // size of array

public:
    // Constructor → allocate memory
    Array(int s) {
        size = s;
        A = new int[size];
    }

    // Take input from user
    void create() {
        cout << "Enter elements:\n";
        for (int i = 0; i < size; i++) {
            cin >> A[i];
        }
    }

    // Print array elements
    void display() {
        cout << "Array: ";
        for (int i = 0; i < size; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    // Destructor → free memory
    ~Array() {
        delete[] A;
    }
};

int main() {
    Array arr(5);  // create array of size 5
    arr.create();  // input values
    arr.display(); // output values
}
