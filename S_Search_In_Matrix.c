#include <stdio.h>

int main() {
    
    int row, col;
    scanf ("%d %d", &row, &col);

    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j=0; j<col; j++) {

            scanf ("%d", &arr[i][j]);
        }
    }

    int x;
    scanf ("%d", &x);

    int temp = 0;

    for (int i=0; i<row; i++) {

        for (int j=0; j<col; j++) {

            if (x == arr[i][j]) {

                temp = 1;
                break;
            }
        }
    }
    
    if (temp) {

        printf ("will not take number");

    }else {
        printf ("will take number");
    }
    
    return 0;
}