#include <stdio.h>
#include <string.h>

int main() {
    
    int t;
    scanf ("%d", &t);   // number of test cases

    while (t--) {
        char strS[51], strT[51];
        scanf ("%s %s", strS, strT);

        char strX[101];

        int i=0;
        // string operation
        while(i < strlen(strS) && i < strlen(strT)) {

            printf ("%c%c", strS[i], strT[i]);
            i++;

        }

        while (i < strlen(strS)) {

            printf ("%c", strS[i]);
            i++;

        }

        while (i < strlen(strT)) {

            printf ("%c", strT[i]);
            i++;

        }
        
        printf("\n");
        
    }
    
    return 0;
}