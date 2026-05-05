#include <stdio.h>

int main() {    // another pattern
    
    int n;
    scanf ("%d", &n);

    int whiteSpaces = n-1, star = 1;

    for (int i=1; i<=2*n; i++) {

        // whit spaces
        for (int j=1; j<=whiteSpaces; j++) {

            printf (" ");
        }

        // stars
        for (int j=1; j<=star; j++) {

            printf ("*");
        }

        // logic to print upper and lower pyramid
        if (i < n) {

            whiteSpaces--;
            star+=2;
        
        }else {

            whiteSpaces++;
            star-=2;
        }

        printf ("\n");
    }
    
    return 0;
}