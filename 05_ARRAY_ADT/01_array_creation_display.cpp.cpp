#include <iostream>
using namespace std;

class Array
{
private:
    int *A;
    int size;

public:
    Array(int size){
        this->size = size;
        A = new int[size];
    }

    void create(){
        cout << "Enter the array elements: " << endl;
        for (int i = 0; i < size; i++){
            cout << "Array element " << i << ": ";
            cin >> A[i];
        }
    }

    void display(){
        cout << "Array elements: ";
        for (int i = 0; i < size; i++){
            cout << A[i] << " ";
        }
        cout << endl;
    }

    ~Array(){
        delete[] A;
        cout << "Array destroyed" << endl;
    }
};

int main(){
    Array arr(5);
    arr.create();
    arr.display();
}