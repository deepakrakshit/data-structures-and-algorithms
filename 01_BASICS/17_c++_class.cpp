#include <iostream>
using namespace std;

// Rectangle class (C struct + functions → C++ class)
class rectangle
{
private:
    int length;    // data hidden from outside (encapsulation)
    int breadth;

public:
    // Constructor: initializes object at creation time
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    // Member function to calculate area (read-only)
    int area()
    {
        return length * breadth;
    }

    // Member function to modify length
    void change_length(int new_l)
    {
        length = new_l;
    }
};

int main()
{
    rectangle r(20, 25);   // object creation + initialization

    cout << r.area() << endl;   // 20 × 25 = 500

    r.change_length(50);        // modify internal state
    cout << r.area() << endl;   // 50 × 25 = 1250

    return 0;
}