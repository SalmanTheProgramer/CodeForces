#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf ("%d", &n);

    // dynamic memory allocation
    char *s = (char *) malloc ((n + 1) * sizeof (char));
    scanf ("%s", s);

    int freq[26] = {0};

    // count freq. of each char.
    for (int i=0; i<n; i++) {

        freq[s[i] - 'a']++;
    }

    // print sorted string
    for (int i=0; i<26; i++) {

        for (int j=0; j<freq[i]; j++) {

            printf ("%c", 'a' + i);
        }
    }

    free (s);
    
    return 0;
}
