#include <stdio.h>

int distinctCount (int arr[], int n) {

    int distinctCNT = 0;

    // counting using two pointers tecnique
    for (int i=0; i<n; i++) {

        int isDistict = 1;

        for (int j=0; j<i; j++) {

            if (arr[i] == arr[j]) {

                isDistict = 0;
                break;

            }
        }

        if(isDistict) {

            distinctCNT++;
        }
    }

    return distinctCNT;
}

int main() {
    
    int n;
    scanf ("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) {
       
        scanf ("%d", &arr[i]);
    }

    int result = distinctCount (arr, n);

    printf ("%d", result);
    
    return 0;
}