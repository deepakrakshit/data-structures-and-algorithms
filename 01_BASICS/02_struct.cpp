#include<stdio.h>

struct cards{
    int face; // 1(ace),2,3,...,10
    int shape; // 1 for hearts, 2 for clubs, 3 for diamonds, 4 for spades
    int color; // 1 for red, 2 for black
};

int main(){

    struct cards deck[52]{ {1,2,1}, {1,1,2}}; // and so on upto 52 cards

    printf("%d", deck[0].face);

    return 0;
}