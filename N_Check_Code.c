#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    int a, b;
    scanf ("%d %d", &a, &b);

    char s[25];
    scanf ("%s", &s);

    if (strlen (s) != a + b + 1) {

        printf ("No");
        return 0;
    }

    if (s[a] != '-') {
        
        printf ("No");
        return 0;
    }

    for (int i=0; i<strlen(s); i++) {

        if (i == a) continue;

        if (!isdigit(s[i])) {

            printf ("No");
            return 0;
        }
    }

    printf ("Yes");
    
    return 0;
}