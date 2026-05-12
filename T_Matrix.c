#include <stdio.h>
#include <math.h>

int main() {
    
    int n;
    scanf ("%d", &n);

    int arr[n][n];
    for (int i=0; i<n; i++) {

        for (int j=0; j<n; j++) {

            scanf ("%d", &arr[i][j]);
        }
    }    

    int pDiagonalVal = 0,
        sDiagonalVal = 0;

    // traversing the 2d array 
    for (int i=0; i<n; i++) {

        // for sum of Primary Diagonal values
        for (int j=0; j<n; j++) {   

            if (i==j) {

                pDiagonalVal += arr[i][j];
            }
        }

        // for sum of Secondary Diagonal values
        for (int j=0; j<n; j++) {

            if (i+j == n-1) {

                sDiagonalVal += arr[i][j];
            }
        }
    }
    
    int result = abs (pDiagonalVal - sDiagonalVal);

    printf ("%d ", result);
    return 0;
}