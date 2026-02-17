#include <iostream>

using namespace std;

int add(int x, int y);

int main(){
    int a = 5, b = 10;

    cout << add(a,b) << endl;

    return 0;
}

int add(int x, int y) {
    return x + y;
}