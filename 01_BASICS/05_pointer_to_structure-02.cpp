// how to create an structure in heap

#include <iostream>

using namespace std;

struct rectangle {
    int length;
    int breadth;    
};

int main(){

    // struct rectangle *p;
    // p = (struct rectangle *)malloc(sizeof(struct rectangle));              // this is the old c method
    
    rectangle *p = new rectangle; // in c++, its not mandatory writing struct at the starting.. in c its mandatory

    p->length = 10;
    p->breadth = 20;

    cout << p->length << " " << p->breadth << endl;

    delete p; // in c language we use free(p);

    // RULE:
    // new → delete
    // new[] → delete[]

    return 0;
}