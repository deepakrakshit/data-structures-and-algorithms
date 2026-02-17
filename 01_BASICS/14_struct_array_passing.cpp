#include <iostream>
using namespace std;

struct test{
    int a[5];
    int b;
};

// Structure is passed by VALUE (full copy is made)
void fun(struct test t){

    // modifies only the local COPY of the array inside the struct
    t.a[0] = 15;
    t.a[1] = 25;

    // also modifies only the local copy
    t.b = 50;
}

int main(){

    test t1 = {{1,2,3,4,5}, 5};

    fun(t1);   // t1 is copied into t

    // original array remains unchanged
    for(int i : t1.a){
        cout << i << " ";
    }

    cout << endl << t1.b << endl;  // b also remains unchanged (5)

    return 0;
}
