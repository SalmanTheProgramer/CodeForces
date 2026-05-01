#include <stdio.h>

int main() {
    
    char ch;
    int n;

    scanf ("%c %d", &ch, &n);

    int arr[n];
    for (int i=0; i<n; i++) {

        scanf ("%d", &arr[i]);

    }

    for (int i=0; i<n; i++) {

        for (int j=0; j<arr[i]; j++) {

            printf ("%c", ch);

        }

        printf ("\n");
    }
    
    return 0;
}