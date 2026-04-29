#include <stdio.h>

int main() {
    
    int n;
    scanf ("%d", &n);

    int eve=0, odd=0, pos=0, neg=0;

    for (int i=1; i<=n; i++) {
        
        int x;
        scanf ("%d", &x);

        if (x%2 == 0) {
            
            eve++;

        }else {

            odd++;

        }

        if (x > 0) {

            pos++;

        }else if (x < 0) {

            neg++;

        }
    }

    printf ("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", eve,odd,pos,neg);
    
    return 0;
}