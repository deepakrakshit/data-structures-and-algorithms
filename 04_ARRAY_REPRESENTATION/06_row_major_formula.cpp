#include <iostream>
using namespace std;

/*
    ROW MAJOR ORDER

    Elements stored row by row

    ----------------------------------
    2D ARRAY

    Address(A[i][j]) =
    Base + ((i * n) + j) * size

    where:
    n = number of columns

    ----------------------------------
    3D ARRAY

    Address(A[i][j][k]) =
    Base + ((i * b * c) + (j * c) + k) * size

    where:
    b = rows, c = columns

    ----------------------------------
    n-D ARRAY

    Address(A[i1][i2]...[in]) =
    Base + (i1 * d2*d3*...*dn
          + i2 * d3*...*dn
          + ...
          + in) * size

    where:
    d1, d2, ..., dn = dimensions
*/