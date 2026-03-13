// TOPIC: Quadratic Complexity

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<i<<","<<j<<endl;
        }
    }

    /*
    Outer loop runs n times
    Inner loop runs n times

    Total operations = n * n

    Time Complexity = O(n^2)
    */

    return 0;
}