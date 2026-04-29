#include <stdio.h>

int main() {
    
    int n;
    scanf ("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) {

        scanf ("%d", &arr[i]);
    }

    // int i = 0, j = n-1;
    // //two pointers technique
    // while (i < j) {     // reversing the array
        
    //     // swapping left and right values
    //     int temp = arr[i];
    //         arr[i] = arr[j];
    //         arr[j] = temp;
        
    //     i++;
    //     j--;
    // }

    // reversing array using 'in‑place reversal algorithm'
    for (int i=0; i<n/2; i++) {

        int temp = arr[i];
            arr[i] = arr[n - i - 1];
            arr[n - i -1] = temp;

    }
    
    for (int i = 0; i < n; i++)
    {
        
        printf ("%d ", arr[i]);
    }
    
    
    return 0;
}