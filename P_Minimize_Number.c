#include <stdio.h>

int n;
int arr[201];

int maxOp () {

    for (int i=0; i<n; i++) {   // base case

        if (arr[i]%2 != 0) return 0;
    }

    // Opertion
    for (int i=0; i<n; i++) {

        arr[i] /= 2;
    }

    return 1 + maxOp ();    // recursion case
}

int main() {

    scanf ("%d", &n);
    
    for (int i=0; i<n; i++) {

        scanf ("%d", &arr[i]);
    }

    printf ("%d", maxOp ());
    
    return 0;
}