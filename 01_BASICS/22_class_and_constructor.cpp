#include <iostream>
using namespace std;

class rectangle {
private:
    int length;
    int breadth;

public:
    rectangle();                 // default constructor
    rectangle(int l, int b);      // parameterized constructor

    int area();
    int perimeter();

    void setLength(int l);
    void setBreadth(int b);

    ~rectangle();                // destructor
};

// Default constructor definition
rectangle::rectangle() {
    length = 1;
    breadth = 1;
}

// Parameterized constructor
rectangle::rectangle(int l, int b) {
    length = l;
    breadth = b;
}

// Calculates area
int rectangle::area() {
    return length * breadth;
}

int rectangle::perimeter() {
    return 2 * (length + breadth);
}

void rectangle::setLength(int l) {
    length = l;
}

void rectangle::setBreadth(int b) {
    breadth = b;
}

// Destructor
rectangle::~rectangle() {
    // no dynamic memory to clean up
}

int main() {

    rectangle r(20, 25);   // constructor call

    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;

    r.setLength(50);
    r.setBreadth(60);
    cout << "Updated Area = " << r.area() << endl;

    return 0;
}