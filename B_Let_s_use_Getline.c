#include <stdio.h>

int main() {
    
    char str[1000005];
    fgets (str, 1000005, stdin);

    for (int i=0; str[i] != '\\'; i++) {

        printf ("%c", str[i]);
    }
  
    return 0;
}