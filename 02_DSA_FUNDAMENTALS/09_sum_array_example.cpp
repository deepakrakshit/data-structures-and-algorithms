// TOPIC: Linear Complexity Example

#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int s = 0;

    for(int i=0;i<n;i++)
    {
        s = s + arr[i];
    }

    return s;

    /*
    Loop runs n times

    Time Complexity = O(n)
    */
}

int main()
{
    int arr[] = {1,2,3,4,5};

    int n = 5;

    cout<<sum(arr,n);
}