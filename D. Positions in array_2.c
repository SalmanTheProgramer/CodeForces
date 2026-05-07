#include <stdio.h>

void positionArr (int arr[], int n) {

    for (int i=0; i<n; i++) {

        if (arr[i] <= 10) {

            printf ("A[%d] = %d\n", i, arr[i]);
        }
    }
}


int main() {

    int n;
    scanf ("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) {

        scanf ("%d", &arr[i]);
    }
    
    positionArr(arr, n);
    
    return 0;
}