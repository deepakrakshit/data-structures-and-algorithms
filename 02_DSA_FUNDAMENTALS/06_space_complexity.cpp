// TOPIC: Space Complexity

#include <iostream>
using namespace std;

int main()
{
    int n = 10;

    // array size depends on n
    int arr[n];

    for(int i=0;i<n;i++)
    {
        arr[i] = i;
    }

    cout << "1" ;

    /*
    Space Complexity explanation

    Memory used by array = n elements

    So space grows with n

    Space Complexity = O(n)
    */

    return 0;
}