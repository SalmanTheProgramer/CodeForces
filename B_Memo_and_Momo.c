#include <stdio.h>

int bothDivisible (long long int x, long long int y, long long int z) {

    if (x%z == 0 && y%z == 0) return 1;

    return 0;
}

void onlyOneDivisible (long long int p, long long int q, long long int r) {

    if (p%r == 0) {

        printf ("Memo");

    }else if (q%r == 0) {

        printf ("Momo");
    
    }else {

        printf ("No One");
    }
}

int main() {
    
    long long int a, b, k;
    scanf ("%lld%lld%lld", &a, &b, &k);

    int temp = bothDivisible (a, b, k);

    if (temp) {

        printf ("Both");

    }else {

        onlyOneDivisible (a, b, k);
    }
    
    return 0;
}