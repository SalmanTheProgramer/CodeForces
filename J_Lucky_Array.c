#include <stdio.h>

int main() {
    
    int n;
    scanf ("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) {

        scanf ("%d", &arr[i]);
    }

    int min = arr[0];

    // searching the min value
    for (int i=0; i<n; i++) {

        if (arr[i] < min) {

            min = arr[i];
        }
    }

    int cnt = 0;
    
    // counting the min value occurance
    for (int i=0; i<n; i++) {

        if (arr[i] == min) {

            cnt++;
        }
    }

    // output
    if (cnt%2 != 0) {

        printf ("Lucky");

    }else {

        printf ("Unlucky");
    }

    return 0;
}