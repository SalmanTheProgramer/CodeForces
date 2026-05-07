#include <stdio.h>

void ascending (int x, int y, int z) {

    if (x <= y && x <= z) {
        
        printf ("%d\n", x);

        if (y <= z) {

            printf ("%d\n%d\n", y, z);

        }else {

            printf ("%d\n%d\n", z, y);
        }
    
    }else if (y <= x && y <= z) {

        printf ("%d\n", y);

        if (x <= z) {

            printf ("%d\n%d\n", x, z);

        }else {

            printf ("%d\n%d\n", z, x);
        }

    } else {

        printf ("%d\n", z);

        if (x <= y) {

            printf ("%d\n%d\n", x, y);

        }else {

            printf ("%d\n%d\n", y, x);

        }
    }

    printf ("\n%d\n%d\n%d", x, y, z);

}

// void values (int x, int y, int z) {

//     //printf ("\n");

//     printf ("%d\n%d\n%d", x, y, z);

// }


int main() {
    
    int a, b, c;
    scanf ("%d%d%d", &a, &b, &c);

    ascending (a, b, c);
    //values (a, b, c);
    
    return 0;
}