#include <iostream>
using namespace std;

/*
    COLUMN MAJOR ORDER

    Elements stored column by column

    ----------------------------------
    2D ARRAY

    Address(A[i][j]) =
    Base + ((j * m) + i) * size

    where:
    m = number of rows

    ----------------------------------
    3D ARRAY

    Address(A[i][j][k]) =
    Base + ((k * a * b) + (j * a) + i) * size

    where:
    a = rows, b = columns

    ----------------------------------
    n-D ARRAY

    Address(A[i1][i2]...[in]) =
    Base + (in * d1*d2*...*d(n-1)
          + i(n-1) * d1*d2*...*d(n-2)
          + ...
          + i1) * size

    where:
    d1, d2, ..., dn = dimensions
*/