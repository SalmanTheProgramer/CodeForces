#include <stdio.h>

int main() {
    
    int n;
    scanf ("%d", &n);

    int arr[n];

    for (int i=0; i<n; i++) {   // taking the values of array

        scanf ("%d", &arr[i]);
    }

    // reversing the array
    // for (int i=0; i < n/2; i++) {

    //     // swapping the values
    //     int temp = arr[i];
    //         arr[i] = arr[n - i - 1];
    //         arr[n - i - 1] = temp;    
    // }

    // int i=0, j = n-1;
    // while (i < j) { // reversing the array using two pointers technique
        
    //     // swapping the values
    //     int temp = arr[i];
    //         arr[i] = arr[j];
    //         arr[j] = temp;
        
    //     i++;
    //     j--;
    // }

    for (int i=0; i<n; i++) {// Logic of solving the problem

        if (arr[i] == 0) {

            int left = 0, right = i - 1;
            while (left < right) {  // using two pointers technique to reverse the array

                // swapping the left and right values
                int temp = arr[left];
                    arr[left] = arr[right];
                    arr[right] = temp;
                
                left++;
                right--;
            }
        }
    }
    // print reversed array
    for (int i=0; i<n; i++) {

        printf ("%d ", arr[i]);
    }
    
    return 0;
}