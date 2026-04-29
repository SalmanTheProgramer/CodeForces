#include <stdio.h>

int main() {
    
    int n;
    scanf ("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) {

        scanf ("%d", &arr[i]);
    }

    long long int sum = 0;
    for (int j=0; j<n; j++) {

        sum += arr[j];
    }    

    if (sum < 0) {

        sum *= (-1);
        printf ("%lld", sum);

    }else {

        printf ("%lld", sum);
    }

    return 0;
}