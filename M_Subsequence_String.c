#include <stdio.h>
#include <string.h>

int main() {
    
    char s[10005];
    scanf ("%s", s);

    char target[] = "hello";
    int j=0, found=0, len=strlen (s);
    
    for (int i=0; i<len; i++) {

        if (s[i] == target[j]) {

            j++;
        }

        if (j == strlen (target)) {

            found = 1;
            break;
        }
    }

    if (found) {

        printf ("YES");

    }else {

        printf ("NO");
    }
    
    return 0;
}