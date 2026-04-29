#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int n;
    scanf ("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) {

        scanf ("%d", &arr[i]);
    }

    bool temp = true;

    int i = 0, j = n-1;
    while (i < j) {     // traversing the array
        
        if (arr[i] != arr[j]) {

            temp = false;
        }
        
        i++;
        j--;
    }
    
    if (temp == true) {

        printf ("YES");

    }else {

        printf  ("NO");
    }
    
    
    return 0;
}