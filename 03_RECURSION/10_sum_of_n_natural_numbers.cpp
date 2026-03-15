#include <iostream>
using namespace std;

/*
SUM OF FIRST N NATURAL NUMBERS (RECURSION)

Natural numbers: 1, 2, 3, 4, ...

Goal:
Find the sum of first n natural numbers.

Example:
n = 5
1 + 2 + 3 + 4 + 5 = 15

Recursive idea:
sum(n) = n + sum(n-1)

Base condition:
sum(0) = 0
*/

int sum(int n){

    if(n == 0){
        return n;
    } else {
        return sum(n-1) + n;
    }
}

int main(){

    cout << sum(10);

    return 0;
}