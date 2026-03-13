// TOPIC: Logarithmic Time Complexity

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int l = 0;
    int r = n-1;

    while(l <= r)
    {
        int mid = (l+r)/2;

        if(arr[mid] == key)
            return mid;

        else if(arr[mid] < key)
            l = mid + 1;

        else
            r = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {2,4,6,8,10,12,14,16};

    int n = 8;

    int result = binarySearch(arr,n,10);

    cout<<"Element index: "<<result<<endl;

    /*
    Binary Search divides the problem into half every step.

    Example size reduction:

    n
    n/2
    n/4
    n/8

    Number of steps becomes log n

    Time Complexity = O(log n)
    */

    return 0;
}