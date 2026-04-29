#include <stdio.h>
#include <string.h>

int main() {
    
    char str[1000005];
    scanf ("%s", str);
    
    int count = 0;

    for (int i=0; i<strlen(str); i++) {

        // to get the exact value of the charecter, 
            // we have to exclude ASCII value
        count += (str[i] - '0');    

    }

    printf ("%d", count);

    return 0;
}