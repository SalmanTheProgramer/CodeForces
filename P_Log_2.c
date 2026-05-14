#include <stdio.h>

int logarithm (long long int x) {

    if (x <= 1) return 0;   // base case

    return 1 + logarithm (x / 2);
}

int main() {
    
    long long int n;
    scanf ("%lld", &n);

    int result = logarithm (n);

    printf ("%d", result);
    
    return 0;
}