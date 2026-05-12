#include <stdio.h>

long long int arraySum (int a[], int n) {

    if (n == 0) return 0;   // base case

    return a[n-1] + arraySum (a, n-1);
} 

int main() {
    
    int n;
    scanf ("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) {

        scanf ("%d", &arr[i]);
    }

    long long int result = arraySum (arr, n);

    printf ("%lld", result);
    
    return 0;
}