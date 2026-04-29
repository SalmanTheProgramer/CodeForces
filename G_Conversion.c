#include <stdio.h>
#include <string.h>
#include <ctype.h>  // for ASCII operation

int main() {
    
    char str[100005];
    fgets (str, sizeof(str), stdin);

    for (int i=0; i<strlen(str); i++) { // to process each charecter

        if (str[i] == ',') {    // to convert ',' to white space

            str[i] = ' ';
        
        }else if (islower(str[i])) {    // to convert into UpperCase

            str[i] = toupper(str[i]);

        }else if (isupper(str[i])) {    // to convert into LowerCase

            str[i] = tolower(str[i]);
        }
    }

    printf ("%s", str);
    
    return 0;
}