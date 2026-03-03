#include <iostream>
using namespace std;

template <class T>
class Arithmetic{
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithmetic <T> :: Arithmetic(T a, T b){
    this->a = x; // this refers to the class varibale
    this->b = y;
}

template <class T>
T Arithmetic <T> :: add(){
    return a + b;
}

template <class T>
T Arithmetic <T> :: sub(){
    return a - b;
}

int main(){
    Arithmetic <int> a(10,15);
    cout << a.add();

    Arithmetic <float> a1(1.5, 4.5);
    cout << a1.add();

    return 0;
}