#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    
    char str[1005];
    scanf ("%s", str);

    bool temp = true;

    int i=0, j = strlen(str)-1;
    while (i < j) {

        if (str[i] != str[j]) {

            temp = false;
            break;
        }

        i++;
        j--;
    }

    if (temp == true) { printf ("YES"); }
    else { printf ("NO"); }
    
    return 0;
}