#include <stdio.h>

int main() {
    
    int t, x, y;
    scanf ("%d", &t);

    for (int i=0; i<t; i++) {
        
        scanf ("%d %d", &x, &y);

        int sum=0;

        if (x >= y) {
            
            for (int j=y+1; j<x; j++) {

                if (j%2 == 1) {

                    sum += j;
                }
            }

        }else {

            for (int j=x+1; j<y; j++) {

                if (j%2 == 1) {

                    sum += j;
                }
            }
        }

        printf ("%d\n", sum);
        
    }
    
    return 0;
}