#include <stdio.h>
#include <string.h>

int main() {
    
    char Sstr[1005], Tstr[1005];
    scanf ("%s", Sstr);
    scanf ("%s", Tstr);

    int a = strlen(Sstr), b = strlen(Tstr);

    printf ("%d %d\n", a, b);
    printf ("%s %s", Sstr, Tstr);
    
    return 0;
}