#include <stdio.h>

int main() {
    
    int n; 
    scanf ("%d", &n);

    int whiteSpace = n-1, star = 1;

    // upper pyramid
    for (int i =0; i<n; i++) {

        // white spaces
        for (int j=1; j<=whiteSpace; j++) {

            printf (" ");
        }

        // stars
        for (int j=1; j<=star; j++) {

            printf ("*");
        }

        printf ("\n");

        whiteSpace--;
        star+=2;
    }

    // resetting values
    whiteSpace = 0, star = (2 * n) - 1;
    
    // lower pyramid (reversed)
    for (int i=0; i<n; i++) {

        // white spaces
        for (int j=1; j<=whiteSpace; j++) {

            printf (" ");
        }

        // stars
        for (int j=1; j<=star; j++) {

            printf ("*");
        }

        printf ("\n");

        whiteSpace++;
        star-=2;
    }
    
    return 0;
}