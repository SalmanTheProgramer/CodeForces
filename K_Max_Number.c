#include <stdio.h>

int maxNum (int a[], int n) {

    if (n == 1) return a[0]; // base case

    int max = maxNum (a, n-1);
    
    if (a[n-1] > max) {

        return a[n-1];
    
    }else {

        return max;
    }
}

int main() {
    
    int n;
    scanf ("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) {

        scanf ("%d", &arr[i]);
    }

    int max = maxNum (arr, n);

    printf ("%d", max);
    
    return 0;
}