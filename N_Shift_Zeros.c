#include <stdio.h>

void SelectionSort (int a[], int x) {

    // selection sort
    for (int i=0; i<x-1; i++) {

        for (int j=i+1; j<x; j++) {

            if (a[i] == 0) {

                int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
            }
        }
    }

    // output
    for (int i=0; i<x; i++) {

        printf ("%d ", a[i]);
    }
}


int main() {
    
    int n;
    scanf ("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) {

        scanf ("%d", &arr[i]);
    }

    // // selection sort
    // for (int i=0; i<n-1; i++) {

    //     for (int j=i+1; j<n; j++) {

    //         if (arr[i] == 0) {

    //             int temp = arr[i];
    //                 arr[i] = arr[j];
    //                 arr[j] = temp;
    //         }
    //     }
    // }

    SelectionSort (arr, n);

    // output
    // for (int i=0; i<n; i++) {

    //     printf ("%d ", arr[i]);
    // }
    
    return 0;
}