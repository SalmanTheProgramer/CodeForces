#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int n;
    scanf ("%d", &n);

    int pDiagonalSUM = 0,
        sDiagonalSUM = 0;

    for (int i=0; i<n; i++) {

        for (int j=0; j<n; j++) {

            int val;
            scanf ("%d", &val);

            if (i == j) pDiagonalSUM += val;
            if (i+j == n-1) sDiagonalSUM += val;

        }
    }

    printf ("%d ", abs (pDiagonalSUM - sDiagonalSUM));
    
    return 0;
}