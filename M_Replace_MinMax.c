#include <stdio.h>
#include <limits.h>

int main() {
    
    int n;
    scanf ("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) {

        scanf ("%d", &arr[i]);
    }

    int max_idx = 0, min_idx = 0;

    // traversing for the Maximum & Minimum value
    for (int i=0; i<n; i++) {

        // for Max. value
        if (arr[i] > arr[max_idx]) {

            //max = arr[i];
            max_idx = i;

        }

        // for Min. value
        if (arr[i] < arr[min_idx]) {

            //min = arr[i];
            min_idx = i;

        }
    }

    // swapping the min, max values
    int temp = arr[min_idx];
        arr[min_idx] = arr[max_idx];
        arr[max_idx] = temp;

    // Printing the values of the array 
    for (int i=0; i<n; i++) {

        printf ("%d ", arr[i]);
    }
    
    return 0;
}