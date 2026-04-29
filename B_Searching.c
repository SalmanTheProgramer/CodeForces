#include <stdio.h>

int main() {
    
    int n;
    scanf ("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) {

        scanf ("%d", &arr[i]);
    }

    int x;
    scanf ("%d", &x);

    int temp = -1;
    
    for (int i=0; i<n; i++) {

        if (x == arr[i]) {

            temp = i;
            break;
        
        }
    }

    printf ("%d", temp);
    
    return 0;
}