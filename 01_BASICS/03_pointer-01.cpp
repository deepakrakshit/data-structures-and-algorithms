#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){

    int *p;
    // p = (int *)malloc(5 * sizeof(int));         // c method

    p = new int[5]; // same as malloc but easy syntax in c++

    for(int i = 0; i < 5; i++){
        p[i] = i+1;
    }


    for(int i = 0; i < 5; i++){
        cout<<p[i]<<endl;
    }

    delete []p; // important to release the memory once you are done using it
    // free(p)             // used in c to free the memory

    return 0;
}