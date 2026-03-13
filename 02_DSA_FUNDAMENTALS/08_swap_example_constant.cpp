// TOPIC: Constant Time Operation

#include <iostream>
using namespace std;

void swapNumbers(int &x, int &y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;

    /*
    Number of operations is fixed.

    Does not depend on input size.

    Time Complexity = O(1)
    */
}

int main()
{
    int a = 5;
    int b = 10;

    swapNumbers(a,b);

    cout<<a<<" "<<b<<endl;
}