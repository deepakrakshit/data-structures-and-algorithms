#include<iostream>

using namespace std;

struct rectangle{
    int length;
    int breadth;
};


int main(){

    struct rectangle r1 = {5,10};
    struct rectangle *p;

    p = &r1;
    
    //  r1.length = 15;                  // wrong (will throw an error)
    //  (*p).length = 15                 // this is the correct version but we generally use the shorter form
        p->length = 15;                  // this is the shorter form and it modifies r1

        cout << r1.length << endl;   // 15
        cout << p->length << endl;   // 15
    
    return 0;
}