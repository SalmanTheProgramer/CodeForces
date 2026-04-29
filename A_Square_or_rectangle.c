#include <stdio.h>
#include <string.h>
#include <stdlib.h>     // for 'atoi()'

int main() {    // we can easily do it without 'string'
    
    int t;
    scanf ("%d", &t);

    while (t--) {

        char a[1000005], b[1000005];
        scanf ("%s %s", a, b);

        int w = atoi(a),
            h = atoi(b);    // converting string to integer values

        if (w == h) { printf ("Square\n"); }
        else { printf ("Rectangle\n"); }
    }
    
    return 0;
}