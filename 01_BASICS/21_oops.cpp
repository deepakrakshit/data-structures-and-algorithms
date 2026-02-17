#include <iostream>
#include <stdio.h>
using namespace std;

class rectangle{

private:
    int length;
    int breadth;

public:
    
    rectangle(int l, int b){
        length = l;
        breadth = b;
    }

    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2 * (length + breadth);
    }
};

int main(){

    int l, b;

    cout << "Enter Length and Breadth: " << endl;
    cin >> l >> b;

    rectangle r(l, b);

    printf("Area = %d\nPerimeter = %d\n", r.area(), r.perimeter());

    return 0;
}