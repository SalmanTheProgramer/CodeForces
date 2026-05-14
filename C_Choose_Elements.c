#include <stdio.h>

int main() {
    
    int n, k;
    scanf ("%d%d", &n, &k);

    long long int arr[n];
    for (int i=0; i<n; i++) {

        scanf ("%lld", &arr[i]);
    }

    // rearranging the array in descending order
    for (int i=0; i<n-1; i++) {

        for (int j=i+1; j<n; j++) {

            if (arr[i] < arr[j]) {

                long long int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
            }
        }
    }

    long long int cnt = 0;

    // counting the sum of elements till k indices
    for (int i=0; i<k; i++) {

        if (arr[i] > 0) cnt += arr[i];
        
    }

    printf ("%lld", cnt);
    
    return 0;
}