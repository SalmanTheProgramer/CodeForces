#include <stdio.h>
#include <math.h>

int main() {
    
    int row, col;
    int arr[5][5];
    for (int i=0; i<5; i++) {   // find the postion of '1'

        for (int j=0; j<5; j++) {

            scanf ("%d", &arr[i][j]);

            if (arr[i][j]) {    // convert the matrix to 1 based

                row = i + 1;
                col = j + 1;
            }
        }
    }

    // perform manhattan distance
    printf ("%d", abs (row - 3) + abs (col - 3));
    
    return 0;
}