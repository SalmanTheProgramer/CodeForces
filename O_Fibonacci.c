#include <stdio.h>

void fibbonacci (int n) {

    if (n < 0) return;

    long long int pre1 = 0, pre2 = 1, temp;   // setting the 1st nd 2nd value

    if (n == 1) {

        printf ("%lld ", pre1);

    }else if (n == 2) {

        printf ("%lld ", pre2);
    
    }else { // when n > 2

        for (int i=3; i<=n; i++) {

        if (n > 2) {

            temp = pre1 + pre2;
                pre1 = pre2;
                pre2 = temp;
        
        } 
        
    }

    printf ("%lld", pre2);

    }
}

int main() {
    
    int n;
    scanf ("%d", &n);

    fibbonacci (n);
    
    return 0;
}