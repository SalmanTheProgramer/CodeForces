#include <stdio.h>

long long int factorial (int n) {

    if (n == 0) return 1;   // base case

    long long int ans = factorial (n-1);  // recursive case

    return ans * n;
}

int main() {
    
    int n;
    scanf ("%d", &n);

    // long long int result = factorial (n);

    printf ("%lld", factorial (n));
    
    return 0;
}