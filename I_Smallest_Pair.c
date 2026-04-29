#include <stdio.h>
#include <limits.h>

int main() {
    
    int t;
    scanf ("%d", &t);

    // execution against test cases
    while (t--)
    {
        int n;
        scanf ("%d", &n);

        int arr[n];
        for (int i=0; i<n; i++) {   // array input

            scanf ("%d", &arr[i]);
        }

        int min_res = INT_MAX;  // assignning The Most maximum value to compare

        // using two pointers technique
        for (int i=0; i<n; i++) {

            for (int j=i+1; j<n; j++) {

                int result = arr[i] + arr[j] + j - i;   // initializing equation

                if (result < min_res) { // to compare minimum result

                    min_res = result;
                }

            }
        }

        printf ("%d\n", min_res); // output

    }
    
    return 0;
}