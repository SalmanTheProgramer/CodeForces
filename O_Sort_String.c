#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringSort (int n, char s[]) {

    for (int i=0; i<n-1; i++) {

        for (int j=i+1; j<n; j++) {

            if (s[i] > s[j]) {

                char temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
            }
        }
    }

    printf ("%s", s);
}

int main() {
    
    int n;
    scanf ("%d", &n);

    // allocate on heap
    char *str = (char *) malloc ((n+1) * sizeof (char));
    scanf ("%s", str);

    stringSort (n, str);

    free (str); // free memory
    
    return 0;
}