#include <stdio.h>
#include <string.h>

int main() {
    
    char strX[21], strY[21];
    scanf("%s %s", strX, strY);

    // int i=0;
    // while (1) { // compare Lexicographical Conditions

    //     if (strX[i] == '\0' && strY[i] == '\0') {

    //         printf ("%s", strX);
    //         break;
        
    //     }else if (strX[i] == '\0') {

    //         printf ("%s", strX);
    //         break;

    //     }else if (strY[i] == '\0') {

    //         printf ("%s", strY); 
    //         break;
    //     }

    //     if (strX[i] == strY[i]) {

    //         i++;

    //     }else if (strX[i] < strY[i]) {

    //         printf ("%s", strX); 
    //         break;

    //     }else {

    //         printf ("%s", strY); 
    //         break;
    //     }

    // }


    int val = strcmp(strX, strY);   // built-in function

    // compare Lexicographical Conditions
    if (val < 0) { printf ("%s", strX); }else 
    if (val > 0) { printf ("%s", strY); }else 
        { printf ("%s", strY); }
    

    return 0;
}