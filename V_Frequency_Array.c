#include <stdio.h>

int main() {
    
    // int n, m;
    // scanf ("%d %d", &n, &m);    // take size of the two array

    // int arr[n];
    // for (int i=1; i<=n; i++) {   // take elements of the array

    //     scanf ("%d", &arr[i]);
    // }

    // int count[m] ;   // initilize Frequency array
    // for (int i=1; i<=m; i++) {

    //     count[i] = 0;   // assigning zero to the all indices
    // }

    // // loop to count the repeated variables
    // for (int i=1; i<=n; i++) {

    //     int val = arr[i];
    //     count[val]++;

    // }

    // // output
    // for (int i=1; i<=m; i++) {

    //     printf ("%d\n", count[i]);
    // }

    
    
    /* ***************More Refined version************* */
    
    int n, m;
    scanf("%d %d", &n, &m); // size of the array

    int arr[n], count[m];   // frequency array

    for (int i=1; i<=m; i++) { count[i] = 0; } // assinning zero to all indices of Frequncy array

    // loop to count elements
    for (int i=1; i<=n; i++) {

        scanf ("%d", &arr[i]);  // taing the array elements

        int val = arr[i];
        count[val]++;

    }

    // Output
    for (int i=1; i<=m; i++) {

        printf ("%d\n", count[i]);
    }
    
    return 0;
}