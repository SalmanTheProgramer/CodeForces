#include <stdio.h>

int main() {
    
    int n;
    scanf ("%d", &n);

    int whiteSpace = n-1, star = 1;

    for (int i=1; i<=n; i++) {

        // the White spaces
        for (int j=1; j<=whiteSpace; j++) {

            printf (" ");

        }

        // the stars
        for (int j=1; j<=star; j++) {

            printf ("*");

        }

        printf ("\n");

        whiteSpace--;
        star += 2;
    }
    
    return 0;
}